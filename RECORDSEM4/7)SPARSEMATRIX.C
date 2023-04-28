#include<stdio.h>
void main()
{
 int a[100][100],sparse[100][3],i,j,m,n,s=0;
 clrscr();
 printf("ENTER THE NUMBER OF ROWS AND COLUMNS: ");
 scanf("%d%d",&m,&n);
 printf("ENTER %d ELEMENTS:\n",m*n);
 for(i=0;i<m;i++)
  for(j=0;j<n;j++)
   scanf("%d",&a[i][j]);
 printf("ENTERED MATIRIX:\n");
 for(i=0;i<m;i++)
 {
  for(j=0;j<n;j++)
   printf("%d\t",a[i][j]);
  printf("\n");
 }
 for(i=0;i<m;i++)
  for(j=0;j<n;j++)
   if(a[i][j]!=0)
   {
    sparse[s][0]=i+1;
    sparse[s][1]=j+1;
    sparse[s][2]=a[i][j];
    s++;
   }
 printf("THE SPARSE MATRIX IS:\n");
 for(i=0;i<s;i++)
 {
  for(j=0;j<3;j++)
   printf("%d\t",sparse[i][j]);
  printf("\n");
 }
 getch();
}