#include<bits/stdc++.h>
using namespace std;
#define A 28.9
#define B 32.7
#define C 45.6
#define D 78.0
#define E 35.0
#define F 86.2
#define G 27.8
#define H 43.0
#define I 56.0
#define J 65.0

double a,b,c,d,e,f,g,h,i,j;
double ans;

int main(){
	cin>>a>>b>>c>>d>>e>>f>>g>>h>>i>>j;
	ans = a*A+b*B+c*C+d*D+e*E+f*F+g*G+h*H+i*I+j*J;
	cout<<fixed<<setprecision(1)<<ans<<endl;
	return 0;
}
