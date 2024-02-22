/*
 Write a C program that defines a function to add first n numbers.
*/

#include <stdio.h>
int getsum(int );

int main() 
{
 int n;
 printf("Enter Any number n = ");
 scanf("%d",&n);
 printf("\n SUM = %d",getsum(n));
 return 0;
}

int getsum(int n)
{
 return ((n*(n+1))/2);
}

