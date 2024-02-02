#include<bits/stdc++.h>
using namespace std;

const int N = 100010;
int hh,tt=-1,q[N];

int main(){
	int m,x;
	string op;
	cin>>m;
	while(m--){
		cin>>op;
		if(op == "push"){
			cin>>x;
			q[++tt] = x;
		}
		else if(op == "pop") hh++;
		else if(op == "empty") cout<<(hh<=tt?"NO":"YES")<<endl;
		else cout<<q[hh]<<endl;
	}
	return 0;
}
