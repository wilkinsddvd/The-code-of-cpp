#include<bits/stdc++.h>
using namespace std;

long long N;
int ans1,ans2;

int main(){
	cin>>N;
	if(N%2 != 0){
		ans1=N*3+1;
		cout<<N<<"*3+1="<<ans1<<endl;
		while(ans1 != 1){
			int n;
			n = ans1;
			ans1 /=2;
			cout<<n<<"/2="<<ans1<<endl;
		}
		if(ans1 == 1){
		cout<<"End"<<endl;
	}
	
	
	}
	if(N%2==0){
		if(N!=1){
			int ans2;
			ans2 = N;
			N /= 2;
			cout<<ans2<<"/2="<<N<<endl;
			}
		}
		if(N == 1){
			cout<<"End"<<endl;
		}
}
