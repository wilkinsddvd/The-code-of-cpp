#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int ans;
	ans = n % 2023;
	if(ans < 0){
		ans = ans +2023;
	}
	cout<<ans;
	return 0;
}
