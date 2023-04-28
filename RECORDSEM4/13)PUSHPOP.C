#include<stdio.h>
int stack[100],top=-1;
void push()
{
 printf("ENTER THE ELEMENT TO PUSH: ");
 scanf("%d",&stack[++top]);
 printf("ONE ELEMENT PUSHED.");
}
void pop()
{
 if(top==-1)
  printf("STACK IS EMPTY!!!\n");
 else
 {
  top--;
  printf("ONE ELEMENT POPPED.\n");
 }
}
void display()
{
 if(top==-1)
  printf("THE STACK IS EMPTY!!!");
 else
 {
  int i;
  printf("THE STACK IS:\n");
    for(i=top;i>=0;i--)
   printf("%d\n",stack[i]);
 }
}
void main()
{
 int n,i=1;
 clrscr();
 while(i!=0)
 {
  printf("ENTER YOUR CHOICE:\n1)PUSH\n2)POP\n3)DISPLAY\n");
  scanf("%d",&n);
  switch(n)
  {
   case 1:
    push();
    break;
   case 2:
    pop();
    break;
   case 3:
    display();
    break;
   default:
    printf("INVALID INPUT.");
  }
  printf("\nWANNA CONTINUE");
  scanf("%d",&i);
 }
}