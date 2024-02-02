#include<iostream>
#include<string>
using namespace std;

string convertToTitle(int n){
	string result = "";
	while(n>0){
		n--;
		char c = 'A'+n% 26;
		result = c+result;
		n/=26;
	}
	return result;
}

int main(){
	int n;
	cin>>n;
	string result = convertToTitle(n);
	cout<<result<<endl;
	return 0;
}
