#include<stdio.h>
#include<math.h>
void main()
{
 float a,b,c,d;
 clrscr();
 printf("ENTER THE VALUES FOR a,b And c:");
 scanf("%f%f%f",&a,&b,&c);
 d=b*b-(4*a*c);
 printf("EQUATION: %fx2 + %fx + %f , HAS:\n",a,b,c);
 if(d==0)
 printf("EQUAL ROOTS: %f.",-b/(2*a));
 else if(d<0)
 printf("IMAGINARY ROOTS.");
 else
 printf("ROOT 1: %f\nROOT 2: %f",(-b+sqrt(d))/(2*a),(-b-sqrt(d))/(2*a));
 getch();
}