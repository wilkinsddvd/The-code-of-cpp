#include<iostream>
using namespace std;

const int N = 100010;

int e[N],ne[N],idx = 1;

void insert(int k,int x)
{
	e[idx] = x;
	ne[idx] =  ne[k];
	ne[k] = idx++;
}

void remove(int k){
	ne[k] = ne[ne[k]];
}

int main(){
	int m;
	cin>>m;
	char op[2];
	int k,x;
	while(m--){
		cin>>op;
		if(op[0] == 'H'){
			cin>>x;
			insert(0,x);
		}
		else if(op[0] == 'D')
		{
			cin>>k;
			remove(k);
		}
		else
		{
			cin>>k>>x;
			insert(k,x);
		}
	}
	for(int i=ne[0];i != 0;i=ne[i])
		cout<<e[i]<<" ";
	return 0;
}
