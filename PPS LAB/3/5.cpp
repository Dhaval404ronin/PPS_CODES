/*
18. Write a program to reverse a number.
*/

#include <stdio.h>
int main()
{
 int no,rev=0;
 printf("\n Enter No to make it Reverse : ");
 scanf("%d",&no);
 while(no>0)
 {
  rev=(rev*10)+(no%10);
  no=no/10;
 }
 printf("\n Reverse of entered no is : %d",rev);
 return 0;
}
