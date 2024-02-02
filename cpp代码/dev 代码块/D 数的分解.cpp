//题目: 树的分解
// 把 2019 分解成 3个 各不相同的正整数之和 并且要求每个正整数都不包含数字 2 4 一共有多少种不同的分解方法？
// 注意 三个数 重复 视为一次  

#include<stdio.h>
int f(int m)// 定义函数判断是否含2 4 
{
	int n;
	while(m){
		n = m % 10;
		m /= 10;
		if(n==2 || n == 4)
			return 0; // 含2，4 返回0 结束计算 
	} 
	return 1;
}

int main(){
	int s = 0; // s 相当于一个计数器 每找到一个组合加1 
	for(int a=1;a<2019;a++){
		if(f(a)) // 当 a 符合条件时执行循环 减少循环次数 提高计算效率
		{
			for(int b = a+1;b<2019;b++){
				if(f(b)){
					int c = 2019 - a - b;
					if(f(c) && c>b) s++;
				}
			} 
		} 
	} 
	printf("%d",s);
}
