#include<iostream>
using namespace std;

const int N = 100005;
int l[N],r[N],e[N],idx;

void insert(int k,int x){
	e[idx] = x;
	l[idx] = k;
	r[idx] = r[k];
	l[r[k]] = idx;
	r[k] = idx++;
}

void remove(int k){
	r[l[k]] = r[k];
	l[r[k]] = l[k];
}

int main(){
	int m;
	cin>>m;
	l[1] = 0,r[0] = 1,idx = 2;
	while(m--){
		string op;
		int k,x;
		
		cin>>op;
		if(op[0] == 'L'){
			cin>>x;
			insert(0,x);
		} 
		else if(op[0] == 'R')
		{
			cin>> x;
			insert(l[1],x);
		}
		else if(op[0] == 'D')
		{
			cin>>k;
			remove(k+1); 
		}
		else if(op[0] == 'IL')
		{
			cin>>k>>x;
			insert(l[k+1],x);
		}
		else
		{
			cin>>k>>x;
			insert(k+1,x);
		}
	}
	for(int i = r[0];i!=1;i=r[i])
		cout<<e[i]<<" ";
	return 0;
}
