#include<stdio.h>
void main()
{
 char c[100][100],temp[100];
 int i,j,n;
 clrscr();
 printf("ENTER THE NUMBER OF STRINGS REQUIRED: ");
 scanf("%d",&n);
 printf("ENTER %d STRINGS:\n",n);
 for(i=0;i<n;i++)
  scanf("%s",&c[i]);
 for(i=0;i<n;i++)
  for(j=0;j<n-1-i;j++)
   if(strcmp(c[j+1],c[j])<0)
   {
    strcpy(temp,c[j]);
    strcpy(c[j],c[j+1]);
    strcpy(c[j+1],temp);
   }
 printf("THE LIST AFTER SORTING IS:\n");
 for(i=0;i<n;i++)
  printf("%s\n",c[i]);
 getch();
}