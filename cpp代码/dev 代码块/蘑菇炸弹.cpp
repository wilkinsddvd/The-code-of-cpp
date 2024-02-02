// Î´Íê³É 

#include <iostream>
using namespace std;

int main()
{
	int n,cnt = 0;
	long long N; 
	int a[N];
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		for(int j=2;j<=n;j++)
		if(a[i]>=a[i-1]+a[i+1]){
   			cnt++;
			break;	
  		}
	}

  	cout<<cnt;
  	return 0;
}
