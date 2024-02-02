#include<bits/stdc++.h>
using namespace std;

int t,n,a[10] = {0,1,2,3,4,5,6,7,8,9},ans;

int main(){
	cin>>n;
	while(1){
		int x = 0;
		for(int i=1;i<=7;i++){
			x = x*10 + a[i];
			int y = 0;
			for(int j=i+1;j<=8;j++){
				y = y*10 + a[j];
				int z = 0;
				for(int k = j+1;k<=9;k++)
					z = z*10 + a[k];
				if(y%z == 0 && x+y/z == n)
					ans++; 
			}
		}
		next_permutation(a+1,a+9+1);
		bool check = 0;
		for(int i=1;i<=9;i++){
			if(a[i] != i){
				check = 1;
				break;				
			}
		}
		if(!check) break;
	}
	cout<<ans;
	return 0;
}
