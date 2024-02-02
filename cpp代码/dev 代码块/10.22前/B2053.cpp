#include<iostream>
#include<cstdlib>
#include<cmath>
#include<iomanip>

using namespace std;

double a,b,c,delta;

int main()
{
	cin>>a>>b>>c;
	delta=b*b-4*a*c;
	double x1=(-1.0*b+sqrt(delta))/(2*a);
	double x2=(-1.0*b+sqrt(delta))/(2*a);
	if(x1>x2)
	{
		swap(x1,x2); 
	} 
	if(delta<0)
	{
		cout<<"No answer!";
	}
	else if(delta==0)
	{
		printf("x1=x2=%0.5lf",x1);
	}
	else
	{
		printf("x1=%0.5lf;x2=%0.5lf",x1,x2);
	}

}
