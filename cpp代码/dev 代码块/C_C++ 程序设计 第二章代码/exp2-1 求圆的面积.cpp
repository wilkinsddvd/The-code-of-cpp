/* 程序 Exp2-1  求圆的面积*/
#include<stdio.h>
#define PI 3.1415926

int main(){
	float s = 0,r = 0;
	scanf("%f",&r);
	s = PI*r*r;
	printf("S = %f",s);
	return 0;
}

