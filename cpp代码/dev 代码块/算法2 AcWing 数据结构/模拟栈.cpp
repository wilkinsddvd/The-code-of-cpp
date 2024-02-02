#include<iostream>
using namespace std;

const int N = 100010;

int top,stk[N];

int main(){
	string op;
	int m,x;
	cin>>m;
	while(m--){
		cin>>op;
		if(op == "push") 
			cin>>x,stk[++top] = x;
		else if(op == "pop")
			top--;
		else if(op == "empty")
			cout<<(top>0?"NO":"YES")<<endl;
		else
			cout<<stk[top]<<endl;
	}
	return 0;
} 
