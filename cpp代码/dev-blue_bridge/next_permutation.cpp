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

// next_permutation() �Ĺ����ǽ�������ѡ����Χ���������ֵ������ȫ����
 
