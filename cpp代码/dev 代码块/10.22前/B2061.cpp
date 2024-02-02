#include<iostream>
using namespace std;

int n,elem,a=0,b=0,c=0;

int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>elem;
		if(elem==1)
			a+=elem;
		if(elem==5)
			b+=1;
		if(elem==10)
			c+=1;
	} 
	cout<<a<<endl;
	cout<<b<<endl;
	cout<<c<<endl;
	return 0;
}
