#include<bits/stdc++.h>
using namespace std;

int main(){
	int row = 8,col = 8, row1 =8,col1 =2,row2 = 4,col2 =8,row3 = 4,col3 = 6;
	int ans;
	ans = row*col-((row1*col1+row2*col2+row3*col3)/2);
	cout<<ans;
	return 0;
}
