#include<bits/stdc++.h>
using namespace std;

int x,y,result;

bool check(int k){
	if(k==1)
		return 0;
	if(k==2)
		return 1;
	for(int i=2;i*i<=k;i++)
		if(k%i==0)
			return 0;
	return 1;
}

int main(){
	cin>>x>>y;
	int s = min(x,y),e = max(x,y);
	for(int i=s;i<=e;++i)
		if(check(i))
			++result;
	cout<<result<<endl;
	return 0;
}
