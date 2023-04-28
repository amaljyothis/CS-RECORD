#include<stdio.h>
void search(int ar[],int num,int min,int max)
{
 int mid=(min+max)/2;
 if(ar[mid]==num)
  printf("SEARCH SUCCESS.");
 else if(min>=max)
  printf("SEARCH FAILED.");
 else if(ar[mid]>num)
  search(ar,num,min,mid-1);
 else if(ar[mid]<num)
  search(ar,num,mid+1,max);
}
void main()
{
 int a[100],i,n,s;
 clrscr();
 printf("ENTER THE NUMBER OF TERMS: ");
 scanf("%d",&n);
 printf("ENTER %d NUMBERS: ",n);
 for(i=0;i<n;i++)
  scanf("%d",&a[i]);
 printf("ENTER THE ELEMENT TO SEARCH: ");
 scanf("%d",&s);
 search(a,s,0,n-1);
 getch();
}