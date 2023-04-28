#include<stdio.h>
void main()
{
 int a[100],n,i,j,temp,min;
 clrscr();
 printf("ENTER NO OF ELEMENTS:");
 scanf("%d",&n);
 printf("ENTER %d ELEMENTS:\n",n);
 for(i=0;i<n;i++)
  scanf("%d",&a[i]);
 printf("ENTERED ARRAY IS:\n");
 for(i=0;i<n;i++)
  printf("%d ",a[i]);
 for(i=0;i<n;i++)
 {
  min=i;
  for(j=i+1;j<n;j++)
   if(a[j]<a[min])
    min=j;
  temp=a[i];
  a[i]=a[min];
  a[min]=temp;
 }
 printf("\nSORTED ARRAY IS:\n");
 for(i=0;i<n;i++)
  printf("%d ",a[i]);
 getch();
}