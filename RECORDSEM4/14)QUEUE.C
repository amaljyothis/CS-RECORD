#include<stdio.h>
int queue[100],front=0,rear=0,i;
void insert()
{
 printf("ENTER THE ELEMENT TO BE INSERTED: ");
 scanf("%d",&queue[rear++]);
}
void delete()
{
 if(front==0 && rear==0)
  printf("NOTHING TO DELETE QUEUE IS EMPTY!!!!");
 else
 {
  for(i=front;i<rear;i++)
   queue[i]=queue[i+1];
  rear--;
  printf("ONE ELEMENT DELETED.");
 }
}
void display()
{
 if(front==0 && rear==0)
  printf("QUEUE IS EMPTY!!!!");
 else
 {
  printf("THE QUEUE IS:\n");
  for(i=front;i<rear;i++)
   printf("%d ",queue[i]);
 }
}
void main()
{
 int n,i=1;
 clrscr();
 while(i!=0)
 {
  printf("ENTER YOUR CHOICE:\n1)INSERT\n2)DELETE\n3)DISPLAY\n");
  scanf("%d",&n);
  switch(n)
  {
   case 1:
    insert();
    break;
   case 2:
    delete();
    break;
   case 3:
    display();
    break;
   default:
    printf("INVALID INPUT.");
  }
  printf("\nWANNA CONTINUE:");
  scanf("%d",&i);
 }
 getch();
}