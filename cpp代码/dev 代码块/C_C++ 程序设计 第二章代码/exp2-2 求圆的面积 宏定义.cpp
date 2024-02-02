/*exp2-2 求圆的面积 宏定义*/
#include<stdio.h>
#define PI 3.1415926
#define S(r) PI*r*r

int main(){
	
	float r=0,s=0;
	scanf("%f",&r);
	printf("s = %f",S(r));
	return 0;
} 
