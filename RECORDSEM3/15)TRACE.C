#include<stdio.h>
void main()
{
 int m,i,j,a[100][100],t=0;
 clrscr();
 printf("ENTER THE SIZE:");
 scanf("%d",&m);
 printf("ENTER %d NUMBERS:",m*m);
 for(i=0;i<m;i++)
  for(j=0;j<m;j++)
   scanf("%d",&a[i][j]);
 printf("ENTERED MATRIX:\n");
 for(i=0;i<m;i++)
 {
  for(j=0;j<m;j++)
   printf("%d\t",a[i][j]);
  printf("\n");
 }
 for(i=0;i<m;i++)
  t+=a[i][i];
 printf("TRACE OF THE MATRIX: %d",t);
 getch();
}