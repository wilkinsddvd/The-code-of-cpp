/*exp2-3 字母大小写的转换*/
#include<stdio.h>

int main(){
	char ch1,ch2;
	printf("Input a captital letter:");
	ch1 = getchar();
	// 转变为小写字母 +32 小写字母的ASCLL码大 大写字母的ASCLL码小
	ch2 = ch1 + 32;
	printf("ASCLL of %c is %d\n",ch1,ch1);
	printf("ASCLL of %c is %d\n",ch2,ch2);
	return 0; 
}
