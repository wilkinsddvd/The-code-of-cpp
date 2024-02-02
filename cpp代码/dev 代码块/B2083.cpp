#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b,f;
	char c;
	cin>>a>>b>>c>>f;
	if(f==1){
		for(int i=0;i<a;i++){
			for(int j=0;j<b;j++){
				cout<<c;
			}
			cout<<endl;
		}
		return 0;
	}
	else if(f==0){
		for(int i=0;i<b;i++)cout<<c;
		cout<<endl;
		for(int i=0;i<a-2;i++){
			cout<<c;
			for(int j=0;j<b-2;j++)cout<<' ';
			cout<<c<<endl;
		}
		for(int i=0;i<b;i++)cout<<c;
	}
	else{
		for(int i=0;i<a;i++){
			for(int j=0;j<b;j++){
				cout<<c;
			}
			cout<<endl;
		}
		return 0;
	}
	return 0;
}
