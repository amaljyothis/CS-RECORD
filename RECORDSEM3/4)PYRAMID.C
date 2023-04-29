#include<stdio.h>
void main()
{
 int i,j,n;
 clrscr();
 printf("ENTER THE NUMBER OF LAYERS REQUIRED:");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  for(j=n-i;j>=0;j--)
   printf(" ");
  for(j=0;j<=i;j++)
   printf(" *");
  printf("\n");
 }
 getch();
}