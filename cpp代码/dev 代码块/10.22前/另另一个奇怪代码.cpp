#include<iostream>
using namespace std;

int main()
{
	double a,b,c,d,e,a1,b1,c1,d1,e1;
	int result;
	cin>>a>>b>>c>>d>>e;
	a1 = (int)e/3-(int)e%03+(int)a/3-(int)e%3+(int)b/3-(int)b%3;
	b1 = (int)a/3-(int)a%3+(int)b/3-(int)b%3+(int)c/3-(int)c%3;
	c1 = (int)b/3-(int)b%3+(int)c/3-(int)c%3+(int)d/3-(int)d%3;
	d1 = (int)c/3-(int)c%3+(int)d/3-(int)d%3+(int)e/3-(int)e%3;
	e1 = (int)d/3-(int)d%3+(int)e/3-(int)e%3+(int)a/3-(int)a%3;
	result =(a+b+c+d+e)-(a1+b1+c1+d1+e1);
	cout<<a<<b<<c<<d<<e<<endl;
	cout<<result<<endl;
	return 0;
}
