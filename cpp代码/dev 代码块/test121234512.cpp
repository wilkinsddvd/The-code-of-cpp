#include<stdio.h>

int main(){
	float sum;
	for(int i=1;i<=5;i++){
		sum += 1.0/i; 
	}
	printf("%2f",sum);
	return 0;
}

