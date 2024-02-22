/*
21. Write a C program to find the sum and average of different numbers which are accepted by user as many as user wants
*/

#include <stdio.h>

int main()
{
                int no,sum=0,i=0,val;
                printf("\n How many nos you want to enter : ");
                scanf("%d",&no);
                while(i<no)
                {
                                printf("Enter No [%d]:",i+1);
                                scanf("%d",&val);
                                sum=sum+val;
                                i++;
                }
                printf("\n Sum = %d",sum);
                printf("\n Sum = %.2f",((float)sum)/no);
                return 0;

}
