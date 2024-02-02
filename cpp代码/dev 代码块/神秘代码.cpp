#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int flag =1;
	for(int i=1;i<=n;i++){
		int x;
		cin>>x;
		double y = sqrt(x*1.0);
		if(y*y!=x) flag = 0;
	}
	if(flag)
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;
	return 0;
}

//ÓÅ»¯ºó 
//#include<bits/stdc++.h>
//using namespace std;

//int main(){
//	int n;
//	cin>>n;
//	for(int i=0;i<n;i++){
//		int x;
//		cin>>x;
//		double y = sqrt(x*1.0);
//		if(y*y!=x){
//			cout<<"No"<<endl;
//			return 0;
//		}
//	} 
//	cout<<"Yes"<<endl;
//	return 0;
//}
