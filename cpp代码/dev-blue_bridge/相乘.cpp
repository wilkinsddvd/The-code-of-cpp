#include<bits/stdc++.h>
using namespace std;

#define N 1000000007

int main(){
	for(long long i = 1;i<=N;i++){
		long long k =((i%N)*(2021%N)%N);
		if(k==999999999){
			cout<<i;
				return 0;
		}
	}
	return 0;
}

