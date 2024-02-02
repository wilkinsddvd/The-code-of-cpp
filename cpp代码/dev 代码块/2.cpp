#include <bits/stdc++.h>

using namespace std;

int bs(string s, string t,int n);

int n;

int main()
{
	string s;
	string t;
	getline(cin, s);
	getline(cin, t);
	cin>>n; 
	cout << bs(s, t, n);
}
int bs(string s, string t,int n) {
	int i = 0, j =0;
	while ((s[i] != '\0') && (t[j] != '\0')) {
		if (s[i] == t[j]) {
			i++;
			j++;
		}
		else {
			i = i-j+1;
			j = 0;
		}
	}
	if (t[j] == '\0') return i-j + 1;
	else return 0;
}
