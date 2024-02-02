#include<bits/stdc++.h>
using namespace std;

int main(){
	double x1,y1,x2,y2,x3,y3;
	cin>>x1>>y1>>x2>>y2>>x3>>y3;
	double a,b,c,s;
	a = sqrt(pow((x1-x2),2) + pow((y1-y2),2));
	b = sqrt(pow((x1-x3),2) + pow((y1-y3),2));
	c = sqrt(pow((x2-x3),2) + pow((y2-y3),2));
	s = (a+b+c)/2;
	double mianji;
	mianji = sqrt(s*(s-a)*(s-b)*(s-c));
	cout<<fixed<<setprecision(0)<<mianji;
	return 0;
}
