#include<bits/stdc++.h>
using namespace std;

int main(){
	long long X,Y;
	long long cnt=0;
	cin>>X>>Y;
	int n=max(X,Y),e = min(X,Y);
	for(int i=e;i<=n;i++){
		bool q = true;
		for(int j=2;j<=sqrt(i);j++){
				if(i%j == 0) 
				{
					q = false;
					break;
				}
			if(q&&i != true)
				cnt++;
		}
	}
	cout<<cnt<<endl;
	return 0;
}
