#include<bits/stdc++.h>
using namespace std;

double a,b,c,s,l;
double ans;
int result;

int main(){
	cin>>a>>b>>c;
	l = a+b+c;
	if(l%2==0){
		s = l/2;
		if((a+b>c && b+c>a && a+c>b) || (a==b)&&(b==c)){
			ans = sqrt(s*(s-a)*(s-b)*(s-c));
			result = ans*ans;
			cout<<result;
		}else{
			cout<<"-1"
		}	  
	}else{
		cout<<"-1";
	}
	return 0;
}
