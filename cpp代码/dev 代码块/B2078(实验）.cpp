#include<bits/stdc++.h>
using namespace std;

long long m,k;

int main(){
	cin>>m>>k;
	int a;
	a = m - k*3;
	if(a>=0)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}
