#include<iostream>

using namespace std;

int fuzzy_match(string S,string T)
{
	int i,j;
	i = 0;
	j = 0;
	while(S[i] != '\0' && T[j] != '\0')
	{
		if(S[i] == T[j])
		{
			i++;
			j++;
		}
		else
			i++; 
	}
	if(T[j] == '\0') return 1;
	return 0;
}

int main()
{
	string s1,s2,s3;
	getline(cin,s1);
	getline(cin,s2);
	getline(cin,s3);
	if(fuzzy_match(s1,s3) && fuzzy_match(s2,s3))
		cout<<"YES";
	else 
		cout<<"NO";
	return 0;
}

