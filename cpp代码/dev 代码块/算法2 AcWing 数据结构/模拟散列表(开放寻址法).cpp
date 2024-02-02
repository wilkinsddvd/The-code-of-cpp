//开放寻址法 范围2-3倍

//字符串哈希
//核心思想： 将字符串看成P进制数，P的经验值是131或13331，取这两个值的冲突概率低
//小技巧： 取模的数用2^64，这样直接用unsigned long long存储，溢出的结果就是取模的结果
//注意： 字符串从1的位置开始存。前l位字符串的哈希值是h[l] 
//前r位字符串的哈希值是h[r]，则 l~r之间字符串（包含端点）的哈希值可以表示为：
//h[l ～ r] = h[1 ～ r]-h[1 ～ ! - 1] * Pr-l+1

#include<iostream>
#include<cstring>

using namespace std;

const int N = 200003,null = 0x3f3f3f3f;//范围2-3倍 质数
int h[N];
int n;

//如果x在哈希表中 返回x的下标  如果x不在哈希表中 返回x应该插入的位置

int find(int x){
	int k = (x%N+N)%N;
	
	while(h[k] != null && h[k] != x){
		k++;
		if(k == N) k = 0;
	}
	return k;
} 

int main(){
	cin>>n;
	//memset 按字节赋值 后八位
	memset(h,0x3f,sizeof h);
	char op[2];
	int x;
	while(n--){
		cin>>op>>x;
		int k = find(x);
		if(op[0] == 'I') h[k] = x;
		else cout<<(h[k]!=null?"Yes\n":"NO\n");
	} 
	return 0;
}
