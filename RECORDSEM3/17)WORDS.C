#include<stdio.h>
#include<string.h>
void main()
{
 char s[100];
 int i,count=0;
 clrscr();
 printf("ENTER THE SENTENCE: ");
 gets(s);
 for(i=0;i<strlen(s);i++)
  if(s[i]==32)
   count++;
 printf("NUMBERS OF WORDS: %d",count+1);
 getch();
}