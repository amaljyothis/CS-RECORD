#include <stdio.h>
void main()
{
 long n,i,a=1,b=1,c;
 clrscr();
 printf("ENTER THE VALUE FOR n:");
 scanf("%ld",&n);
 if(n==1 || n==2)
 printf("FIBBONACCI NUMBER IS: 1");
 else
 {
 for(i=0;i<n-2;i++)
 {
  c=a+b;
  a=b;
  b=c;
 }
 printf("FIBBONACCI NUMBER IS: %ld",c);
 }
 getch();
}