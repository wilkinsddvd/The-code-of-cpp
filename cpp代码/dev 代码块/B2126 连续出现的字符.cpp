#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	int k,cnt=1;
	cin>>k>>s;
	int length = s.length();
	for(int i=0;i<length;i++){
		if(s[i]==s[i+1]){
			cnt++;
		}else{
			cnt = 1;
		}
		while(cnt == k){
			cout<<s[i]<<endl;
			return 0;
		}
	}
	cout<<"No"; 
	return 0;
}
