#include<iostream> 
using namespace std;

long long N;

int main()
{
	cin>>N;
	if(N>0)
		cout<<"positive"<<endl;
	else if(N==0)
		cout<<"zero"<<endl;
	else
		cout<<"negative"<<endl;
	return 0;
}
