#include<iostream>
#include<iomanip>
using namespace std;

float a;

int main()
{
	float result;
	cin>>a;
	if(a>=0&&a<5)
		result=-a+2.5;
	else if(a>=5&&a<10)
		result=2-1.5*(a-3)*(a-3);
	else 
		result=a/2-1.5;
	cout<<fixed<<setprecision(3)<<result<<endl;
	return 0; 
}
