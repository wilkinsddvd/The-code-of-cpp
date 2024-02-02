typedef unsigned long long ull;
ull h[N],p[N]; 

//h[k] 存储字符串前k个字母的哈希值
//p[k] 存储p^k mod 2^64

//初始化
p[0] = 1;
for(int i=1;i<=n;i++){
	h[i] = h[i-1]*p + str[i];
	p[i] = p[i-1]*p;
} 

//计算字串str[L~R]的哈希值

ull get(int l,int r){
	return h[r] - h[l-1] * p[r-l+1];
} 
