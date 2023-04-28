#include<stdio.h>
void sortdis(int ar[],int size)
{
 int i,j,temp;
 for(i=0;i<size;i++)
  for(j=0;j<size-1-i;j++)
   if(ar[j]>ar[j+1])
   {
    temp=ar[j];
    ar[j]=ar[j+1];
    ar[j+1]=temp;
   }
 for(i=0;i<size;i++)
  printf("%d ",ar[i]);
 printf("\n");
}
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
 printf("SORTED ARRAY 1:\n");
 sortdis(a,n1);
 printf("SORTED ARRAY 2:\n");
 sortdis(b,n2);
 for(i=0;i<n1;i++)
  c[i]=a[i];
 for(i=0;i<n2;i++)
  c[n1+i]=b[i];
 printf("SORTED MERGED ARRAY:\n");
 sortdis(c,n1+n2);
 getch();
}