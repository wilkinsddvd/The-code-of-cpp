#include<iostream>
using namespace std;

int main(){
	int n,a[100001];
	int m=-9999,len=1;
	int i;
	cin>>n;
	a[0]=-3456497;
	for(i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]==a[i-1])
			len++;
		else
			len=1;
		if(len>m)
			m=len;
	}
	cout<<m<<endl;
	return 0;
}
