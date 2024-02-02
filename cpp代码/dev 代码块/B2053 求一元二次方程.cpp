#include<bits/stdc++.h>
using namespace std;

int main(){
	double a,b,c;
	cin>>a>>b>>c;
	double derta=b*b-4*a*c;
	if(derta>0){
		double x1=(double)(-b+sqrt(derta))/(2*a)*1.0;
		double x2=(double)(-b-sqrt(derta))/(2*a)*1.0;
		if(x1>x2) swap(x1,x2);
		cout<<fixed<<setprecision(5)<<"x1="<<x1<<";"<<"x2="<<x2;
	}
	else if(derta==0){
		double x1 = (double)-b/(2*a)*1.0;
		cout<<fixed<<setprecision(5)<<"x1=x2="<<x1;
	}
	else{
		cout<<"No answer!";
	}
	return 0;
}
