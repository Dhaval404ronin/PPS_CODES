#include<stdio.h>

int main  (){
	int i,j,n;
	for(i=1;i<=5;i++){
		n=1;
		for(j=1;j<=5;j++){
				if(j>=i){
			printf("%d",n);
			n++;
		}
	}
		printf("\n");
	}
	return 0;
}
