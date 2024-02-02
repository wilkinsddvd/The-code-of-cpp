#include<bits/stdc++.h>
using namespace std;

int n;
double a[310];
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	double jas = 0;
	for(int i=2;i<n;i++){
		jas+=a[i];
	}
	cout<<fixed<<setprecision(2)<<jas/(n-2)<<" "<<max(fabs(a[2]-jas/(n-2)),fabs(a[n-1]-jas/(n-2)));
	return 0;
}
