#include<iostream>
#include<cstring>
#include<stack>
#include<unordered_map>

using namespace std;

stack<int> nums;
stack<char> ops;

void eval(){
	int b = nums.top(); nums.pop();
	int a = nums.top(); nums.pop();
	char op = ops.top(); ops.pop();
	int x;
	if(op == '+') x = a+b;
	else if(op == '-') x= a-b;
	else if(op == '*') x = a*b;
	else x = a/b;
	nums.push(x);
}

int main(){
	string str;
	cin>>str;
	
	unordered_map<char,int> pr{{'+',1},{'-',1},{'*',2},{'/',2}};
	for(int i=0;i<str.size();i++)
	{
		char c = str[i];
		if(isdigit(c))
		{
			int x = 0,j=i;
			while(j<str.size()&& isdigit(str[j]))
				x = x * 10 + str[j++] -'0';
			i = j - 1;
			nums.push(x);
		}
		else if(c == '(') ops.push(c);
		else if(c == ')')
		{
			while(ops.top()!='(') eval();
			ops.pop();
		}
		else
		{
			while(ops.size() && ops.top() != '(' && pr[ops.top()] >= pr[c]) eval();
			ops.push(c); 
		}
	}
	while(ops.size()) eval();
	cout<<nums.top()<<endl;
	return 0;
}
