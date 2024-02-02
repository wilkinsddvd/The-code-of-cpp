#include<bits/stdc++.h>
using namespace std;

int n;
double x,y,a,b;

int main(){
	cin>>n;
	cin>>x>>y;
	n--;
	while(n--){
		cin>>a>>b;
		double m=y/x,n=b/a;
		if(m-n>0.05) 
			cout<<"worse"<<endl;
		else if(n-m>0.05)
			cout<<"better"<<endl;
		else
			cout<<"same"<<endl; 
	}
	return 0;
}
