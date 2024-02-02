#include <iostream>
#include <string>
using namespace std;
int bs(string s, string t) {
	int i = 0, j = 0;
	int count = 0;
	while (s[i] != '\0') {//条件改为主串不为零，（一直往下匹配直至主串到头）
		if (s[i] == t[j]) {
			i++;
			j++;
		}
		else {
			i = i - j + 1;
			j = 0;
		}
		if (t[j] == '\0') {
			count++;
			//i++;无需此条，模式到头后，主串并没有到头，会继续执行循环
			//若加上i+，会出现跳跃
			j = 0;
		}
	}
	if (s[i] == '\0') return count;
	else return 0;
}
int main()
{
	string s;
	string t;
	int n;
	getline(cin, s);
	getline(cin, t);
	cout << bs(s, t);
}
