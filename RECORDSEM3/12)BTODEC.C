#include<stdio.h>
#include<math.h>
#include<string.h>
void main()
{
 char n[]="\0";
 long b,i,l,nb=0;
 clrscr();
 printf("ENTER A NUMBER:");
 gets(n);
 strcpy(n,strupr(n));
 l=strlen(n);
 printf("ENTER THE BASE:");
 scanf("%ld",&b);
 for(i=0;i<l;i++)
 {
  if(isalpha(n[l-1-i]))
   nb+=((long)n[l-1-i]-55)*pow(b,i);
  else
   nb+=((long)n[l-1-i]-48)*pow(b,i);
 }
 printf("ITS DECIMAL FORM IS: %ld",nb);
 getch();
}