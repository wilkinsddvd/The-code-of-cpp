#include<bits/stdc++.h>
using namespace std;

int a,b,c,y,cnt=0; 

int main(){
	cin>>a>>b>>c;
	for(int i=0;i<=c/a;i++){
		y=(c-a*i)/b;
		if(a*i+b*y==c) cnt++;
	}
	cout<<cnt<<endl;
	return 0;
}
