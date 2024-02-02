#include<iostream>
using namespace std;

const int MaxSize=100;
typedef int DataType;
DataType data[MaxSize];
int length=0;

void insertList(DataType elem)
{
	int i=length-1;
	while(data[i]!=elem&&i>=0)
	{
		data[i+1]=data[i];
		i--;
	}
	data[i+1]=elem;
	length++;
} 

void show()
{
	for(int i=0;i<length;i++)
		cout<<data[i]<<" ";
	cout<<endl;
}

int main()
{
	cin>>length;
	for(int i=0;i<length;i++)
		cin>>data[i];
	DataType x;
	cin>>x;
	insertList(x);
	show();
	return 0;
}
