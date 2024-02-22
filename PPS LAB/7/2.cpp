// Write a C program to replace a character in given string. 

#include<stdio.h>

int main()
{
char str[50],ch1,ch2;
int i;
printf("\n  Enter String : ");
scanf("%[^\n]s",str);
fflush(stdin);

printf("\n Enter Character to Find : ");
scanf("%c",&ch1);
fflush(stdin);

printf("\n Enter Character to Replace : ");
scanf("%c",&ch2);

for(i=0;str[i]!='\0';i++)
{
 if(str[i]==ch1)
 {
     str[i]=ch2;
 }
}
printf("\n Final String = %s",str);
return 0;
}

