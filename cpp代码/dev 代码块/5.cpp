#include<iostream>

using namespace std;

int main()
{
	int n;
	cin>>n;
	
	int A[n];
	int i;
	for(i = 0;i<n;i++)
	cin>>A[i];
	 
	int j = 0;
	
	for(i=0;i<n;i++)
		if(A[i]!=0)
			A[j++] = A[i];
	
	while(j<n)
		A[j++]=0;
	for(i=0;i<n;i++)
		cout<<A[i]<<' ';
		 	
}
