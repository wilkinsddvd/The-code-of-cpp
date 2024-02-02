#include<bits/stdc++.h>
using namespace std;

int main(){
  int a,b,c;
  cin>>a>>b>>c;
  if(a+b<c || b+c<a || a+c<b)cout<<"-1";
  else{
    int s = (a+b+c)/2;
    cout<<sqrt(s*(s-a)*(s-b)*(s-c));
  }
  return 0;
}
