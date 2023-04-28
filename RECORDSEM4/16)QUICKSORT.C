#include<stdio.h>
int a[100];
void quicksort(int f,int l)
{
 int i,j,pivot,temp;
 pivot=f;
 i=f;
 j=l;
 if(f<l)
 {
  while(i<j)
  {
   while(a[i]<a[pivot] && i<l)
    i++;
   while(a[j]>a[pivot])
    j--;
   if(i<j)
   {
    temp=a[i];
    a[i]=a[j];
    a[j]=temp;
   }
  }
  temp=a[pivot];
  a[pivot]=a[j];
  a[j]=a[pivot];
  quicksort(f,j-1);
  quicksort(j+1,l);
 }
}
void main()
{
 int i,j,n;
 clrscr();
 printf("ENTER THE NUMBER OF ELEMENTS TO SORT: ");
 scanf("%d",&n);
 printf("ENTER %d ELEMENTS: ",n);
 for(i=0;i<n;i++)
  scanf("%d",&a[i]);
 printf("ENTERED ARRAY:\n");
 for(i=0;i<n;i++)
  printf("%d ",a[i]);
 quicksort(0,n-1);
 printf("\nSORTED ARRAY:\n");
 for(i=0;i<n;i++)
  printf("%d ",a[i]);
 getch();
}