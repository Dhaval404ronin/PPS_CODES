#include<stdio.h>
int main (){
	int num,i,count=0;
	printf("enter num");
	scanf("%d",&num);
	
	for(i=0;i<=num;i++){
		if(num%i==0){
			count++;
		}
	}	
	if (count==2){
		printf("prime");
		
	}
	else{
		printf("not prime");
	}
	return 0;
}

