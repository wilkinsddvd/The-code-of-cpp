#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	double e=1.0,sum = 1.0;
	cin>>n;
	for(int i=1;i<=n;i++){
		e*=i;
		sum+=1/e;
	}
	cout<<fixed<<setprecision(10)<<sum<<endl;
	return 0;
}
