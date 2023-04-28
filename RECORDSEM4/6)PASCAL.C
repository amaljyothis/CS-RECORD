#include<stdio.h>
int fact(int num)
{
 int i,f=1;
 for(i=1;i<=num;i++)
  f*=i;
 return f;
}
void main()
{
 long i,j,n,a[100][100];
 clrscr();
 printf("ENTER THE NUMBER OF LAYERS REQUIRED:");
 scanf("%ld",&n);
 for(i=0;i<n;i++)
 {
  for(j=0;j<=i;j++)
   a[i][j]=fact(i)/(fact(i-j)*fact(j));
 }
 for(i=0;i<n;i++)
 {
  for(j=0;j<n-i;j++)
   printf(" ");
  for(j=0;j<=i;j++)
   printf("%d ",a[i][j]);
  printf("\n");
 }
 getch();
}