#include<bits/stdc++.h>
using namespace std;

double MAX(double a,double b,double c){
	return max(a,max(b,c));
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	double a,b,c;
	cin>>a>>b>>c;
	double m = MAX(a,b,c)/(MAX(a+b,b,c)*MAX(a,b,b+c));
	cout<<fixed<<setprecision(3)<<m<<endl;
	return 0; 
}
