#include<iostream>

using namespace std;

int a,b,ans = 1;

int main(){
	cin>>a>>b;
	a%=7;
	for(int i=1;i<=b;i++){
		ans*=a;
		ans%=7;
	}
	if(ans == 0) cout<<"Sunday";
	else if(ans == 1) cout<<"Monday";
	else if(ans == 2) cout<<"Tuesday";
	else if(ans == 3) cout<<"Wednesday";
	else if(ans == 4) cout<<"Thursday";
	else if(ans == 5) cout<<"Friday";
	else if(ans == 6) cout<<"Saturday";
	return 0;
}
