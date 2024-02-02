#include<bits/stdc++.h>
using namespace std;

int main()
{
	char n;
	int k,cnt=0;
	while((n=getchar())!=' ')
		if(n=='3')
			cnt++;
	cin>>k;
	if(cnt == k)
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}
