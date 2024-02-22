/*
28. Write a C program to evaluate the series sum=1-x+x^2/2!-x^3/3!+x^4/4!......-x^9/9!
*/

#include<stdio.h>
#include<math.h>
int main()
{
int n,i,j,x,fact=1;
float sum=0;
printf("\n Enter Highest Power Value (Max 9):");
scanf("%d",&n);
printf("\n Enter the Value of X :");
scanf("%d",&x);
for(i=0;i<=n;i++)
{
        fact=1;
        for(j=i;j>0;j--)
        {
            fact=fact*j;
        }
        if(i%2==0)
        {
         sum=sum+(pow(x,i)/fact);
  }
  else
  {
   sum=sum-(pow(x,i)/fact);
  }
}
printf("\n Sum of Series = %f",sum);
return 0;
}

