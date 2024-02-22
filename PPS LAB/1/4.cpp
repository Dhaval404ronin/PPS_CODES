// Write a C program to interchange two numbers. 


#include <stdio.h>

int main() 
{
 int a,b;
 printf("Enter Value of a :");
 scanf("%d",&a);
 printf("Enter Value of b :");
 scanf("%d",&b);

 a=a+b;
 b=a-b;
 a=a-b;

 printf("\nAfter Swapping Values a = %d b = %d",a,b);
 return 0;
}
