/*
57. Write C program to access elements using pointer. 
*/

#include <stdio.h>

int main() 
{
 int a[5]={2,3,6,9,5};
 int *p,i;
 p=&a[0];
 for(i=0;i<5;i++)
 {
  printf("\n n: %d Value : %d",i+1,*(p+i));
  
 }
 return 0;
}
