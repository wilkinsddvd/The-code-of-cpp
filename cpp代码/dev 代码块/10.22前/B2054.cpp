#include<iostream>
#include<iomanip>
using namespace std;

const int Maxsize=100;
typedef int DataType;
DataType data[Maxsize];

double result;
int length;
double All;

int main()
{
	cin>>length;
	for(int i=0;i<length;i++)
		cin>>data[i];
	All=data[i]++;
	result = All/length;
	cout<<fixed<<setprecision(2)<<result;
	return 0;
}
