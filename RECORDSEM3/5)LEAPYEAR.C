#include<stdio.h>
void main()
{
 int y;
 clrscr();
 printf("ENTER THE YEAR: ");
 scanf("%d",&y);
 if((y%4==0 && y%100!=0) || y%400==0)
  printf("%d IS A LEAP YEAR.",y);
 else
  printf("%d IS A NOT A LEAP YEAR.",y);
 getch();
}