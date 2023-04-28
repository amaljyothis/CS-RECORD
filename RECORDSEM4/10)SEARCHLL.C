#include<stdio.h>
struct node
{
 int data;
 struct node *link;
};
void main()
{
 struct node *start=NULL,*cur;
 int i,n,src;
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
 printf("THE LIST IS:\n");
 for(cur=start;cur!=NULL;cur=cur->link)
  printf("%d ",cur->data);
 printf("\nENTER THE ELEMENT TO SEARCH: ");
 scanf("%d",&src);
 for(cur=start;cur!=NULL;cur=cur->link)
  if(cur->data==src)
  {
   printf("SEARCH SUCCESS.");
   break;
  }
 if(cur==NULL)
  printf("SEARCH FAILED.");
 getch();
}