#include<bits/stdc++.h>

#define A 1.0
#define B 2.0
#define C 3.0
#define D 4.0 
#define E 5.0
#define F 6.0
#define G 7.0
#define H 8.0
#define I 9.0
#define J 10.0
#define K 11.0
#define L 12.0
#define M 13.0
#define N 14.0
#define O 15.0
#define P 16.0
#define Q 17.0
#define R 18.0
#define S 19.0
#define T 20.0
#define U 21.0
#define V 22.0
#define W 23.0
#define X 24.0
#define Y 25.0
#define Z 26.0
using namespace std;

int main(){
	char a[6],b[6];
	for(int i=1;i<=6;i++){
		cin>>a[i];
		cin>>b[i];
	}
	int sum1,sum2;
	for(int i=1;i<=6;i++){
		sum1 *=	a[i];
		sum2 *= b[i];
	}
	int result1,result2;
	result1 = sum1 % 47;
	result2 = sum2 % 47;
	if(result1 == result2){
		cout<<"GO";
	}
	else{
		cout<<"STAY";
	}
	return 0;
	
}
