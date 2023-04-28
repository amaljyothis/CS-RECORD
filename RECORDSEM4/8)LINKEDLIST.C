#include<stdio.h>
struct node
{
 int data;
 struct node *link;
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
  new->link=NULL;
  if(start==NULL)
  {
   start=new;
   cur=new;
  }
  else
  {
   cur->link=new;
   cur=new;
  }
 }
 if(n==0)
  printf("LIST IS EMPTY!!!");
 else
 {
  printf("THE LIST IS:\n");
  for(cur=start;cur!=NULL;cur=cur->link)
   printf("%d ",cur->data);
 }
 getch();
}