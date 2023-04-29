#include<stdio.h>
#include<String.h>
struct stud
{
 char name[100];
 int rollno;
 int m1;
 int m2;
 int m3;
};
void main()
{
 struct stud s[100];
 int i,n;
 clrscr();
 printf("ENTER THE TOTAL NUMBER OF STUDENTS: ");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  printf("\nENTER THE NAME AND ROLL.NO OF STUDENTS %d: ",i+1);
  scanf("%s%d",s[i].name,&s[i].rollno);
  printf("\nENTER THE MARK IN 3 SUBJECTS OF STUDENT %d: ",i+1);
  scanf("%d%d%d",&s[i].m1,&s[i].m2,&s[i].m3);
 }
 printf("\nTHE LIST:\nSTUDENT\tROLL.NO\tS1\tS2\tS3");
 for(i=0;i<n;i++)
  printf("\n%s\t %d\t%d\t%d\t%d",s[i].name,s[i].rollno,s[i].m1,s[i].m2,s[i].m3);
 getch();
}