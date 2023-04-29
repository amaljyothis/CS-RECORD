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
  if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
   count++;
 printf("NUMBERS OF VOWELS: %d",count);
 getch();
}