#include<stdio.h>
void main()
{
 int a[100],deg,i;
 clrscr();
 printf("ENTER THE HIGHEST DEGREE: ");
 scanf("%d",&deg);
 for(i=0;i<=deg;i++)
 {
 printf("ENTER THE COEFFICIENT FOR DEGREE %d: ",i);
 scanf("%d",&a[i]);
 }
 printf("THE POLYNOMIAL IS:\n");
 for(i=deg;i>0;i--)
  printf("%dx%d + ",a[i],i);
 printf("%d",a[0]);
 getch();
}