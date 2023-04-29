#include<stdio.h>
#include<math.h>
void main()
{
 int i,x,y,s=0,num,j,z;
 clrscr();
 printf("ENTER THE RANGE:");
 scanf("%d%d",&x,&y);
 printf("\nTHE AMSTRONG NUMBERS ARE:\n");
 for(i=x;i<=y;i++)
 {
  z=0;
  j=i;
  while(j>0)
  {
   z++;
   j=j/10;
  }
  num=i;
  while(num>0)
  {
   s=s+pow(num%10,z);
   num=num/10;
  }
  if(s==i)
  printf("%d ",i);
  s=0;
 }
 getch();
}