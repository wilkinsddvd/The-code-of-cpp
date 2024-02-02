#include<bits/stdc++.h>
using namespace std;

int main(){
	int cnt=0;
	for(int i=1;i<=2020;i++){
		if(i%6==0&&i%4==0){
			cnt++;
		}
	}
	cout<<cnt;
}
//505
//336
