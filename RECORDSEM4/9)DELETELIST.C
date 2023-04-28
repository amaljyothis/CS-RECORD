#include<stdio.h>
struct node
{
 int data;
 struct node *link;
};
void display(struct node *str)
{
 struct node *cur;
 for(cur=str;cur!=NULL;cur=cur->link)
  printf("%d ",cur->data);
}
void delete(struct node *str,int p1)
{
 if(str==NULL)
  printf("LIST IS EMPTY SO NOTHING TO DELETE!!!!");
 else if(str->link==NULL)
 {
  str=NULL;
  printf("ONLY ONE ELEMENT SO LIST IS EMPTIED.");
 }
 else
 {
  struct node *cur1=str,*cur2;
  int i;
  for(i=1;i<p1-1;i++)
   cur1=cur1->link;
  cur2=cur1;
  cur1=cur1->link;
  cur2->link=cur1->link;
  free(cur1);
  printf("THE LIST AFTER DELETION:\n");
  display(str);
 }
}
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
 {
  delete(start,0);
  getch();
  exit(0);
 }
 printf("THE LIST IS:\n");
 display(start);
 printf("\nENTER THE POSITION TO BE DELETED: ");
 scanf("%d",&pos);
 if(pos<1 || pos>n)
  printf("INVALID INPUT!!!");
 else
  delete(start,pos);
 getch();
}