#include<bits/stdc++.h>
#include<iomanip>
#include<iostream>
using namespace std;

int main()
{
	double C,F;
	cin>>F;
	if(F>=-459.67)
		cout<<fixed<<setprecision(5)<<5*(F-32)/9<<endl;
	return 0;
}
