/*
Write a C program to read and store the roll no and marks of 20 students using an array.
*/

#include <stdio.h>

int main() 
{
int rollno[20],marks[20],i;

for(i=0;i<20;i++)
{ 
printf("Enter Roll of Student [%d] : ",i+1);
scanf("%d",&rollno[i]);
printf("Enter Mark of Student [%d]: ",i+1);
scanf("%d",&marks[i]);
}

for(i=0;i<20;i++)
{
printf("\n Roll No :  %d   Marks : %d",rollno[i],marks[i]);
}

return 0;
}
