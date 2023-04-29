#include<stdio.h>
void main()
{
 int a[100],b[100],c[200],n1,n2,i;
 clrscr();
 printf("ENTER THE SIZE OF ARRAY 1 AND 2: ");
 scanf("%d%d",&n1,&n2);
 printf("ENTER %d ELEMENTS FOR ARRAY 1:",n1);
 for(i=0;i<n1;i++)
  scanf("%d",&a[i]);
 printf("ENTER %d ELEMENTS FOR ARRAY 2:",n2);
 for(i=0;i<n2;i++)
  scanf("%d",&b[i]);
 for(i=0;i<n1;i++)
  c[i]=a[i];
 for(i=0;i<n2;i++)
  c[n1+i]=b[i];
 printf("MERGER ARRAY:\n");
 for(i=0;i<n1+n2;i++)
  printf("%d ",c[i]);
 getch();
}
