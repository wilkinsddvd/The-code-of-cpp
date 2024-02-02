#include<iostream>
#include<iomanip>
using namespace std;

const float PI=3.1415926;

int main()
{
	float S = 0,R=0;
	cin>>R;
	S=PI*R*R;
	cout<<setiosflags(ios::left |ios::fixed);
	cout<<setprecision(2);
	cout<<S;
	return 0; 
}
