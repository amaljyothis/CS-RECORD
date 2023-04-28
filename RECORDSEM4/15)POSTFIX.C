#include<stdio.h>
#include<ctype.h>
#include<string.h>
int stack[100],top=-1,i;
void push(int n1)
{
 stack[++top]=n1;
}
int pop()
{
 return stack[top--];
}
void main()
{
 char c[]="\0";
 printf("ENTER THE POSTFIX EXPRESSION: ");
 gets(c);
 for(i=0;i<strlen(c);i++)
 {
  if(isdigit(c[i]))
   push(c[i]-48);
  else
  {
   switch(c[i])
   {
    case '+':push(pop()+pop());break;
    case '-':push(pop()-pop());break;
    case '*':push(pop()*pop());break;
    case '/':push(pop()/pop());break;
   }
  }
 }
 printf("RESULT: %d",stack[0]);
 getch();
}