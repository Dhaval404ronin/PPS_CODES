/*
 Write a C program to find factorial of a number using recursion.
*/

#include<stdio.h>

int fact(int);

int main()
{
 int n;
 printf("\n Enter Value of n :");
 scanf("%d",&n);
 printf("Factorial = %d",fact(n));
 return 0;
}

int fact(int n)
{
 if(n==1)
            {
       return 1;
            }
    
    return n * fact(n-1);
}
