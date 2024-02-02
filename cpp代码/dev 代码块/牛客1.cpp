#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int main(){
	double E =  2; 
	double a,b,c;
	int n;
	double ans,result;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a>>b>>c;
		ans = pow(E,a);
		result = ans;
		for(int i=0;i<b;i++){
			result += ans;
		}
		cout<<fixed<<setprecision(c)<<result;
	}
	return 0;
}
