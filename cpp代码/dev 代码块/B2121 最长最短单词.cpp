#include<iostream>
#include<cstdio>
#include<string>
using namespace std;

int main(){
	string a,b,t;
	int la = 0,lb = 1000;
	char ch;
	while(ch = getchar()){
		if(ch =='\n'|| ch == EOF) break;
		if(ch == ' '|| ch == ','|| ch == '.'){
			if(t.length()>la)
				a=t,la = t.length();
			if(t.length()<lb)
				b=t,lb = t.length();
			t ="";
			continue;
		}
		t.push_back(ch);
	}
	cout<<a<<endl<<b;
	return 0;
}
