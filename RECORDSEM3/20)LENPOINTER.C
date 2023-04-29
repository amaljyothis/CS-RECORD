#include<stdio.h>
void main()
{
 char *p,*c[100];
 clrscr();
 printf("ENTER THE STRING: ");
 gets(*c);
 p=*c;
 while(*p!=NULL)
 p++;
 printf("LENGTH IS: %d",(p-*c));
 getch();
}