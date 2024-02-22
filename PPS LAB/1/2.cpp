

/*
 Write a program to find area of triangle.
(a=h*b*.5) 
a = area h = height b = base 
*/

#include<stdio.h>
int main()
{
 float a,h,b;
 printf("\n Enter height :");
 scanf("%f",&h);
 printf("\n Enter base :");
 scanf("%f",&b);
 a=b*h*0.5;
 printf("\n Area of triangle = %f",a);
 return 0;
}
