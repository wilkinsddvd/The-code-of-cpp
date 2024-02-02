#include<bits/stdc++.h>
using namespace std;

int a,b;

int ack(int a,int b){
	if(a==0) return b+1;
	if(b==0) return ack(a-1,1);
	return ack(a-1,ack(a,b-1));
}

int main(){
	cin>>a>>b;
	cout<<ack(a,b);
}
