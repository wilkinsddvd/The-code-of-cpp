#include<bits/stdc++.h>
using namespace std;

int cnt;
void f(int hua,int dian,int jiu){
	if(hua == 0 && dian == 0 && jiu ==1)
		++cnt;
	if(hua>0)
		f(hua-1,dian,jiu-1);
	if(dian>0)
		f(hua,dian-1,jiu*2);
}

int main(){
	f(9,5,2);
	cout<<cnt<<endl;
	return 0;
}
