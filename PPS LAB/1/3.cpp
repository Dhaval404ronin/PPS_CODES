/*
 Write a program to calculate simple interest 
  (i = (p*r*n)/100 ) 
   i = Simple interest    p = Principal amount 
   r = Rate of interest   n = Number of years 
*/

#include <stdio.h>

int main() 
{
 int n;
 float p, r, I;
 printf("\n Enter Amount p :");
 scanf("%f",&p);
 printf("\n Enter Rate r :");
 scanf("%f",&r);
 printf("\n Enter No of Years n :");
 scanf("%d",&n);
 I = (p*r*n)/100;
 printf("\n Interest = %.2f",I);
 return 0;
}

