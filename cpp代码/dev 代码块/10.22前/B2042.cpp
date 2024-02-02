#include<iostream>
using namespace std;

long long n;

int main()
{
	cin>>n;
	if(n%3==0&&n%5==0)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}
