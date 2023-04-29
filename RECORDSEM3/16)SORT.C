#include<stdio.h>
void main()
{
 int a[100],n,i,j,temp;
 clrscr();
 printf("ENTER NO OF ELEMENTS:");
 scanf("%d",&n);
 printf("ENTER %d ELEMENTS:\n",n);
 for(i=0;i<n;i++)
  scanf("%d",&a[i]);
 printf("ENTERED ARRAY:\n");
 for(i=0;i<n;i++) 
 for(i=0;i<n;i++)
  for(j=0;j<n-1-i;j++)
   if(a[j]>a[j+1])
   {
    temp=a[j];
    a[j]=a[j+1];
    a[j+1]=temp;
   }
 printf("\nSORTED ARRAY:\n");
 for(i=0;i<n;i++)
  printf("%d ",a[i]);
 getch();
}