#include<bits/stdc++.h>
using namespace std;

int a[30];

int main(){
	int cnt=0,ans1;
	a[30]=99, 22, 51, 63, 72, 61, 20, 88, 40, 21, 63, 30, 11, 18, 99, 12, 93, 16, 7, 53, 64, 9, 28, 84, 34, 96, 52, 82, 51, 77;
	for(int i=0;i<30;i++){
		for(int j=1;j<30;j++){
			ans1=a[i]*a[j];
			if(ans1>=2022){
				cnt++;
			}
		}
	}
	cout<<cnt;	
}
//������ 
