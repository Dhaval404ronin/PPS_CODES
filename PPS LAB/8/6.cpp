/*
 Write a function that will scan a character string passed as an argument and convert all lowercase character into their uppercase equivalents 
*/

#include <stdio.h>

void UpperCase(char *);

int main() 
{
 char str[50];
 printf("Enter String : ");
 scanf("%s",str);
 UpperCase(str);
 printf("String in Upper Case : %s",str);
 return 0;
}

void UpperCase(char *ch)
{
 int i=0;
 while(ch[i]!='\0')
 {
  if(ch[i]>='a' && ch[i]<='z')
  {
   ch[i]=ch[i]-32;
  }
  i++;
 }
}
