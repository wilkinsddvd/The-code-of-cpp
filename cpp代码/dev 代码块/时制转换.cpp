// 输出不符题意，主要是输入中有字符，问题可能是出在这里 
#include<bits/stdc++.h>
using namespace std;

int main(){
	int h,m;
	scanf("%d %d",&h,&m);
	if(h>12){
		h-=12;
	}
	printf("%d:%d pm",h,m);
	return 0;
} 
