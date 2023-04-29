#include<stdio.h>
void main()
{
 long i,n,f=1;
 printf("ENTER A NUMBER:");
 scanf("%ld",&n);
 for(i=2;i<=n;i++)
  f=f*i;
 printf("FACTORIAL: %ld",f);
 getch();
}