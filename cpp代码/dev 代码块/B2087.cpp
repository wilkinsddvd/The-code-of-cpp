#include<iostream>
#include<algorithm>
using namespace std;

int n,m,a[101];

int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	cin>>m;
	cout<<count(a+1,a+n+1,m);
	return 0;
}
