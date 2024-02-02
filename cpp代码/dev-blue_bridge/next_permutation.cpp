#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int a[5] = {2,5,1,3,8};
	sort(a,a+5);
	do{
		for(int i=0;i<5;i++)
		cout<<a[i]<<" ";
		cout<<endl;
	}while(next_permutation(a,a+5));
	return 0;
}

// next_permutation() 的功能是将数组中选定范围的数按照字典序进行全排列
 
