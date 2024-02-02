#include<bits/stdc++.h>
using namespace std;

string jz[5]={"","","","",""};
int main(){
	for(int i=0;i<5;i++) getline(cin,jz[i]);
	int a,b;
	cin>>a>>b;
	swap(jz[a-1],jz[b-1]);
	for(int i=0;i<5;i++)
		cout<<jz[i]<<endl;
	return 0;
}
