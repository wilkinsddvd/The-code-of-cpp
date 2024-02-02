#include<bits/stdc++.h>
using namespace std;

float x;
int n; 
double sum=0;

int main(){
	cin>>x>>n;
	for(int i=n;i>=0;i--){
		sum+=pow(x,i);
	}
	cout<<fixed<<setprecision(2)<<sum<<endl;
	return 0;
}
