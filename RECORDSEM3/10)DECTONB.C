#include<stdio.h>
#include<string.h>
void main()
{
 char c[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
 char nb[]="\0";
 int n,b,i=0;
 clrscr();
 printf("ENTER A DECIMAL NUMBER:");
 scanf("%d",&n);
 printf("ENTER THE NEW BASE:");
 scanf("%d",&b);
 while(n>0)
 {
  nb[i]=c[n%b];
  i++;
  n=n/b;
 }
 printf("NEW BASE FORM IS:");
 puts(strrev(nb));
 getch();
}