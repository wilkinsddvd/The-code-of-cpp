//£¨1£© À­Á´·¨

#include<iostream>
#include<cstring>
using namespace std;

const int N = 100003;
int h[N],e[N],ne[N],idx;
int n;

void insert(int x){
	int k = (x%N+N)%N;
	e[idx] = x;
	ne[idx] = h[k];
	h[k] = idx++; 
} 

bool find(int x){
	int k = (x%N+N)%N;
	for(int i=h[k];i!=-1;i=ne[i])
		if(e[i] == x) return true;
	return false; 
}

int main(){
	cin>>n;
	memset(h,-1,sizeof h);
	char op[2];
	int x;
	while(n--){
		cin>>op>>x;
		if(op[0] == 'I') insert(x);
		else
			cout<<(find(x)?"Yes\n":"No\n");
	}
	return 0;
}
