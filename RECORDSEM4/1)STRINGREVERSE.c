//REVERSE A STRING USING POINTER
#include<stdio.h>
void main()
{
 char *c[100],*p;
 clrscr();
 printf("ENTER THE STRING: ");
 gets(*c);
 p=*c;
 while(*p!=NULL)
  p++;
 for(;p>=*c;p--)
 printf("%c",*p);
 getch();
}