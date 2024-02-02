#include<bits/stdc++.h>
using namespace std;

int main(){
	string a;
	long long money,ans;
	cin>>money>>a;
	ans = money;
	int l = a.length();
	if(a[0] == 'B' && a[1] == 'B')	ans *= 0.8;
	if(a[0] == 'C' && a[1] == 'C')	ans *= 0.7;
	if(a[0] == 'B' || a[1] == 'B')	ans *= 0.8;
	if(a[0] == 'C' || a[1] == 'C')	ans *= 0.7;
	if(a[0] == 'B' && a[1] == 'C')	ans *= 0.6;
	if(a[0] == 'C' && a[1] == 'B')	ans *= 0.6;
	if(((a[0] != 'C')||(a[0] != 'B')) && ((a[1] != 'B') || a[1] != 'C'))	ans = ans;
	cout<<ans;
	return 0;
}
