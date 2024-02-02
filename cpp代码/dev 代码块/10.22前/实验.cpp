#include<iostream>
#include<chrono>
#include<thread>
using namespace std;

int main(){
	int count = 0;
	while(count<10){
		cout<<"This is output "<<cout<<endl;
		this_thread::sleep_for(chrono::milliseconds(500));
		count++;
	}
	return 0;
}
