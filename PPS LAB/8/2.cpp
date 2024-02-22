/*
Write a function prime that returns 1 
if it‘s argument is prime and return 0 otherwise.   
*/

#include <stdio.h>

int prime(int );

int main() 
{
     int no;
     printf("\n Enter any No : ");
     scanf("%d",&no);
     if(prime(no)==1)
     {
           printf(" %d is Prime",no);
     }
     else
     {
            printf(" %d is not Prime",no);
     }
     return 0;
}
     
int prime(int n)
{
     int i=2;
     while(i<n)
     {
          if(n%i==0)
          {
             break;
          }
        i++;
     }

     if(i==n)
     {
           return 1;
     }
     else
     {
          return 0;
     }
}
