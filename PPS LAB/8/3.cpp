/*
Write a function Exchange to interchange the values of two variables, 
say x and y. illustrate the use of this function in a calling function. 
*/

#include<stdio.h>
void swap(int *, int *);

int main()
{
int i=5,j=8;
printf("\n Values Before Exchange :");
printf("\n i = %d  j = %d",i,j);
swap(&i,&j);
printf("\n Values After Exchange :");
printf("\n i = %d  j = %d",i,j);
return 0;
}

void swap(int *a,int *b)
{
 *a = *a + *b;
 *b = *a - *b;
 *a = *a - *b;
}

