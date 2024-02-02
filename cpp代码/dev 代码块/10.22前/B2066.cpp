#include<iostream>
#include<cmath>
using namespace std;

double n,x,y,t,s;

int main(){
	cin>>n;
	for(int i=0;i<n;++i){
		cin>>x>>y>>t;
		s+=1.5*t+2*sqrt(x*x+y*y)/50;
	}
	cout<<int(ceil(s));
	return 0;
} 
