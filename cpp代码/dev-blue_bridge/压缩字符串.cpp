#include<bits/stdc++.h>
using namespace std;

int main(){
	string a;
	int cnt=1,x=1;
	cin>>a;
	for(int i=0;i<a.size();i++){
		if(a[i]==a[i+1]){
			cnt = 2;
			break;
		}
	}
	if(cnt == 1){
		cout<<"NO"<<"\n";
		return 0;
	}else{
		cnt = 1;
		for(int i = 0;i < a.size();i++){
			if(a[i+1] == a[i]){
				cnt++;
				continue;
			}
			if(cnt>1){
				cout<<a[i]<<cnt;
				cnt=1;
			}
			else{
				cout<<a[i];
			}
		}
	}
	cout<<endl;
	return 0;
}
