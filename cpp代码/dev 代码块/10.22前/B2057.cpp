#include<iostream>
using namespace std;

int n;
int c;

int main()
{
	int max=0;
	cin>>n;
	for(int i=1;i<n;i++)
	{
		cin>>c;
		if(c>max)
			max=c;
	}
	cout<<max;
	return 0;
}
