#include<stdio.h>
void main()
{
 int n1,a,i,p=0,n=0,z=0;
 clrscr();
 printf("ENTER THE NUMBER OF TERMS: ");
 scanf("%d",&n1);
 for(i=0;i<n1;i++)
 {
  printf("ENTER A NUMBER: ");
  scanf("%d",&a);
  if(a==0)
   z++;
  else if(a<0)
   n++;
  else
   p++;
 }
 printf("NUMBER OF\nPOSITIVES: %d\nNEGATIVES: %d\nZEROES: %d",p,n,z);
 getch();
}