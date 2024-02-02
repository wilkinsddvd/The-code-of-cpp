#include<bits/stdc++.h>
using namespace std;

bool check1(int x,int y){
	if(x>y)	return 1;
	return 0;
}

bool check2(int x,int y){
	if(x<y || x==y) return 1;
	return 0;
}

bool check3(int x,int y){
	if(x!=y) return 1;
	return 0; 
}

int main(){
	int a,b;
	int ans1,ans2,ans3;
	cin>>a>>b;
	ans1 = check1(a,b);
	ans2 = check2(a,b);
	ans3 = check3(a,b);
	cout<<ans1<<" "<<ans2<<" "<<ans3;
	return 0;
}
