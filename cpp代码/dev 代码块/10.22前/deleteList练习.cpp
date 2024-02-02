#include<iostream>
using namespace std;

const int MaxSize=100;
typedef int DataType;
DataType data[MaxSize];
int length=0;

void deleteList(DataType elem)
{
	int k;
	for(int i=0;i<length;i++)
		if(data[i]!=elem)
			data[k++]=data[i];
	length=k;
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
	deleteList(x);
	show();
	return 0;
}
 
