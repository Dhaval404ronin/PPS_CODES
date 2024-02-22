/*
58. Write C program for sorting using a pointer. 
*/

#include <stdio.h>

int main() 
{
 int a[5]={2,10,6,7,8};
 int *p,i=0,j=0;
 p=&a[0];
 for(i=0;i<4;i++)
 {
  for(j=i+1;j<5;j++)
  {
   if(*(p+i) > *(p+j))
   {
    *(p+i) = *(p+i) + *(p+j);
    *(p+j) = *(p+i) - *(p+j);
    *(p+i) = *(p+i) - *(p+j);
   }
  }
 }
 printf("\n Sorted Values : ");
 for(i=0;i<5;i++)
 {
  printf("%d ",*(p+i));
 }
 return 0;
}
