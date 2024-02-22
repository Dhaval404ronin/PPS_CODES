/*
49. Write a C program to read structure elements from keyboard.
*/

#include <stdio.h>

struct book
{
 int id;
 char name[20];
 float price;
};

int main(void) 
{
 struct book b1;
 printf("\n Enter Book Id : ");
 scanf("%d",&b1.id);
 fflush(stdin);
 printf("\n Enter Book Name : ");
 scanf("%[^\n]s",b1.name);
 printf("\n Enter Book Price : ");
 scanf("%f",&b1.price);
 
 printf("\nBook Id    = %d",b1.id);
 printf("\nBook Name  = %s",b1.name);
 printf("\nBook Price = %.2f",b1.price);
 return 0;
}
