/*
11. Write a C program to check whether the entered character is capital, small letter, digit or any special character.
*/

#include<stdio.h>
int main()
{
 char ch;
 printf("\nEnter Any Character :");
 scanf("%c",&ch);
 if(ch>='0' && ch<='9')
 {
  printf("\n Entered Character is Digit");
 }
 else if(ch>='A' && ch<='Z')
 {
  printf("\n Entered Character is Capital Letter");
 }
 else if(ch>='a' && ch<='z')
 {
  printf("\n Entered Character is Small Letter");
 }
 else
 {
  printf("\n Entered Character is Special Character");
 }
 return 0;
}
