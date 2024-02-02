#include<stdio.h>

int main(){
	double double_E = 31415.926; 
	string_D = "Hello";
	float float_f = 4.0f;
	char char_c = 's';
	char ch;
	int int_B = -1,int_A = 1;
	ch = getchar();
	putchar(ch);
	printf("\n");
	printf("%e",double_E); // 输出指数形式的实数 数字部分默认6位小数
	
	printf("\n");
	
	printf("%g",float_f); // 输出f或e格式中输出宽度较短的一种 不输出无意义的0 
	
	printf("\n");
	
	printf("%c",char_c);// %c 输出一个字符
	
	printf("\n");
	
	printf("%u",int_B);// %u 输出十进制无符号整数 
	
	printf("\n");
	
	printf("%d %i",int_B,int_A); // %d %i 输出带符号整数
	
	printf("\n");
	
	printf("%o",int_B);
	
	printf("\n");
	
	printf("%x",int_B); 
	
	printf("\n");
	
	printf("%6.2f %f",float_f,float_f);
	
	printf("%s",string_D);
	return 0;
}
