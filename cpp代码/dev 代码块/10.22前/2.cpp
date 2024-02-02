#include<iostream>
#include<string>

using namespace std;

int countSubstring(string s,string t){
	int count = 0;
	int pos = 0;
	
	while((pos = s.find(t,pos)!=string::npos)){
		count++;
		pos+=t.length();
	}
	return count;
}

int main(){
	string s,t;
	getline(cin,s);
	getline(cin,t);
	
	int result = countSubstring(s,t);
	cout<<result<<endl;
	return 0; 
}
