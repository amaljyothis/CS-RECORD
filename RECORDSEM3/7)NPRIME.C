#include<stdio.h>
#include<math.h>
void main()
{
 int n,i,c=0,flag=0,j=2;
 clrscr();
 printf("ENTER THE VALUE FOR n:");
 scanf("%d",&n);
 printf("THE FIRST %d PRIME NUMBERS ARE:\n",n);
 while(c<n)
 {
  for(i=2;i<=sqrt(j);i++)
   if(j%i==0)
   {
    flag=1;
    break;
   }
  if(flag==0)
  {
   printf("%d ",j);
   c++;
  }
  flag=0;
  j++;
 }
 getch();
}