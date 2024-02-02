//第十二题 

#include<bits/stdc++.h>
using namespace std;

int L,cnt;

int main(){
	cin>>L;
	while(L>=1){
		L=L/2;
		cnt++;
	}
	cout<<cnt;
}

