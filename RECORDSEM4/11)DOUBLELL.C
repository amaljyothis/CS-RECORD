#include<stdio.h>
struct node
{
 int data;
 struct node *prev;
 struct node *next;
};
void main()
{
 struct node *start=NULL,*cur;
 int n,i,pos;
 clrscr();
 printf("ENTER THE VALUE FOR N: ");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  struct node *new=(struct node*)malloc(sizeof(struct node));
  printf("ENTER ELEMENT %d: ",i+1);
  scanf("%d",&new->data);
  new->next=NULL;
  new->prev=NULL;
  if(start==NULL)
  {
   start=new;
   cur=new;
  }
  else
  {
   cur->next=new;
   new->prev=cur;
   cur=new;
  }
 }
 if(n==0)
  printf("LIST IS EMPTY!!!");
 else
 {
  printf("THE LIST IS:\n");
  for(cur=start;cur->next!=NULL;cur=cur->next)
   printf("%d ",cur->data);
  printf("%d",cur->data);
  printf("\nTHE LIST IN REVERSE ORDER IS:\n");
  for(;cur!=NULL;cur=cur->prev)
   printf("%d ",cur->data);
 }
 getch();
}