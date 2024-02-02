#include<iostream>
using namespace std;

int A,B,cnt1,cnt2;

int main(){
	int n,m,temp;
	cin>>n;
	for(int i=1;i<=n;i++){
		cnt1 = 0,cnt2 = 0;
		m = i;
		while(m){
			temp = m&1;
			m = m>>1;
			if(temp) cnt2++;
			else cnt1++;
		}
		cnt2>cnt1?A++:B++;
	}
	cout<<A<<' '<<B;
	return 0;
}
