#include <iostream>
#include <string>
using namespace std; 
int KMP(string S, string T,int next[]) {
	int i = 0;
	int j = 0;
	while ((S[i] != '\0') && (T[j] != '\0')) {
		if (S[i] == T[j]) {
			i++;
			j++;
		}
		else {
			j = next[j];
		}
		if (j == -1) {
			i++;
			j++;
		}
	}
	if (T[j] == '\0') {
		return i - j + 1;
	}
	else return 0;
}
int acount(string t) {
	int n = 0;
	while (t[n]!='\0') {
		n++;
	}
	return n;
}
void getNext(string T, int length, int next[])//¼ÆËãnextº¯ÊýÖµ
{
	int m = 0, k = -1;
	next[0] = -1;
	while (m < length)
	{
		if (k == -1 || T[m] == T[k])
			next[++m] = ++k;
		else
			k = next[k];
	}
}
int main()
{
	string s;
	string t;
	getline(cin, s);
	getline(cin, t);
	int n = acount(t);
	int next[100];
	getNext(t, n, next);
	cout << KMP(s, t, next) << endl;
	for (int g = 0; g < n; g++) {
		cout << next[g]<<" ";
	}
	
}
