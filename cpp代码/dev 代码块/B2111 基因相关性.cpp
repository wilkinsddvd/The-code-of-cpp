#include<bits/stdc++.h>
using namespace std;

double c,ans;
char a[1000],b[1000];

int len;
int main(){
	cin>>c>>a>>b;
	len = strlen(a);
	for(int i=0;i<len;i++){
		if(a[i]==b[i])
			ans++;
	}
	ans/=len;
	if(ans>=c) cout<<"yes"<<endl;
	else cout<<"no"<<endl;
	return 0;
}
