#include<stdio.h>
void main()
{
 int n,s=0,r=0;
 clrscr();
 printf("ENTER A NUMBER: ");
 scanf("%d",&n);
 while(n!=0)
 {
 s=s+(n%10);
 r=(r*10)+(n%10);
 n=n/10;
 }
 printf("SUM: %d\nREVERSE: %d",s,r);
 getch();
}