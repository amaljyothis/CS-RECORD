#include<stdio.h>
#include<math.h>
void main()
{
 float x[100],s=0,u,i;
 int n;
 clrscr();
 printf("ENTER THE NUMBER OF TERMS:");
 scanf("%d",&n);
 printf("ENTER %d NUMBERS: ",n);
 for(i=0;i<n;i++)
 {
  scanf("%f",&x[i]);
  s+=x[i];
 }
 u=s/n;s=0;
 for(i=0;i<n;i++)
   s+=pow(x[i]-u,2);
 printf("STANDARD DEVIATION IS: %f",sqrt(s/n));
 getch();
}