#include<stdio.h>
int main (){
	int i,j;
	char c= 'A';
	
	
	for(i=1;i<=5;i++){
		for(j=1;j<=5;j++){
			if (j<=6-i){
				printf("%c",c);
			}
		}
		c++;
		printf("\n");
	}
	return 0;
	
}
