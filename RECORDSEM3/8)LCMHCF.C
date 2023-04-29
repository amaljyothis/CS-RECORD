#include<stdio.h>
void main()
{
 int s,b,l,h,i,j;
 clrscr();
 printf("ENTER TWO NUMBER:");
 scanf("%d%d",&s,&b);
 for(i=1;i<=s*b;i++)
 {
 if(b%i==0 && s%i==0)
  h=i;
 if(i%s==0 && i%b==0)
 {
  l=i;
  break;
 }
 }
 printf("LCM: %d\nHCF: %d",l,h);
 getch();
}