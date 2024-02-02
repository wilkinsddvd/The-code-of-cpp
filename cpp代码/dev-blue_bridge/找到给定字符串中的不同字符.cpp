#include<bits/stdc++.h>
using namespace std;

int main(){
	char s1[105],s2[105];
	int sum1 = 0,sum2 = 0;
	int i;
	cin>>s1;
	cin>>s2;
	for(i=0;i<strlen(s1);i++){
		sum1 = sum1 + int(s1[i]);
	}
	for(i=0;i<strlen(s2);i++){
		sum2 = sum2 + int(s2[i]);
	}
	char ans = abs(sum1-sum2);
	
	cout<<ans;
	return 0;
}
