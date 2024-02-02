#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b,c,d;
	cin>>a>>b>>c>>d; 
	int ans1,ans2;
	ans2 = d-b;
	if(ans2<0){
		c -= 1;
		ans2 = abs(ans2+60); 
	}else{
		ans2 = ans2;
	}
	ans1 = c-a;
	cout<<ans1<<" "<<ans2<<endl;
	return 0;
}
