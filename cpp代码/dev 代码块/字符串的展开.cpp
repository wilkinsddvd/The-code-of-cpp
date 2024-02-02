#include<bits/stdc++.h>
using namespace std;

string fun(char b,char e,int p1,int p2,int p3){
	if(e-b == 1){return "";}
	if(!((isalpha(b)&&isalpha(e)&&b<e) || (isdigit(b)&& isdigit(e)&&b<e ))){
		return "-";
	}
	string ans="";
	for(char t = b+1;t<e;t++){
		for(int i=0;i<p2;i++){
			ans+=t;
		}
	}
	if(p1 == 2 && isalpha(b)){
		for(int i=0;i<ans.length(); i++){
			ans[i] = ans[i]-'a'+'A';
		}
	}
	if(p1 == 3){
		for(int i=0;i<ans.length();i++){
			ans[i] = '*';
		}
	}
	if(p3 == 2){
		reverse(ans.begin(),ans.end());
	}
	return ans;
}


int main(){
	int p1,p2,p3;
	cin>>p1>>p2>>p3;
	string s;
	cin>>s;
	string ans = "";
	for(int i=0;i<s.length();i++){
		if(s[i]=='-' && i-1>=0 && i+1<s.length()){
			ans+= fun(s[i-1],s[i+1],p1,p2,p3); 
		}
		else{
			ans+= s[i];
		}
	}
	cout<<ans<<endl;
	return 0;	
}
