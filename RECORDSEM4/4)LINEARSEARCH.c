#include<stdio.h>
void main()
{
 int a[100],n,i,s;
 clrscr();
 printf("ENTER THE NUMBER OF TERMS: ");
 scanf("%d",&n);
 printf("ENTER %d NUMBERS: ",n);
 for(i=0;i<n;i++)
  scanf("%d",&a[i]);
 printf("ENTER THE ELEMENT TO SEARCH: ");
 scanf("%d",&s);
 for(i=0;i<n;i++)
  if(a[i]==s)
  {
   printf("SEARCH SUCCESS.");
   getch();
   exit(0);
  }
 printf("SEARCH FAILED.");
 getch();
}