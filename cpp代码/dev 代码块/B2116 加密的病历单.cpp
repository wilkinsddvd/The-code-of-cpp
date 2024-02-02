#include<iostream>
#include<cstring>
#include<cctype>
#include<algorithm>
using namespace std;

char s[101];int l;
int main(){
	cin>>s;
	l = strlen(s);
	for(int i=0;i<l;++i)
		if(isupper(s[i])) s[i] = tolower(s[i]);
		else if(islower(s[i])) s[i] = toupper(s[i]);
	reverse(s,s+l);
	for(int i=0;i<l;++i)
	{
		switch(s[i]){
			case'x':cout<<'a';break;
			case'X':cout<<'A';break;
			case'y':cout<<'b';break;
			case'Y':cout<<'B';break;
			case'z':cout<<'c';break;
			case'Z':cout<<'C';break;
			default:cout<<char(s[i]+3);break;
		}
	}
	return 0;
}
