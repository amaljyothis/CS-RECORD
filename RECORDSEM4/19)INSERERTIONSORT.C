#include<stdio.h>
void main()
{
 int a[100],n,i,j,key;
 clrscr();
 printf("ENTER NO OF ELEMENTS:");
 scanf("%d",&n);
 printf("ENTER %d ELEMENTS:\n",n);
 for(i=0;i<n;i++)
  scanf("%d",&a[i]);
 printf("ENTERED ARRAY IS:\n");
 for(i=0;i<n;i++)
  printf("%d ",a[i]);
 for(i=1;i<n;i++)
 {
  key=a[i];
  j=i-1;
  while(j>=0 && a[j]>key)
   a[j+1]=a[j--];
  a[j+1]=key;
 }
 printf("\nSORTED ARRAY IS:\n");
 for(i=0;i<n;i++)
  printf("%d ",a[i]);
 getch();
}