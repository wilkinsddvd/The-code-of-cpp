#include<stack>
#include<string>
#include<iostream>

int main(){
	std::cin.tie(0);
	std::ios::sync_with_stdio(false);
	int T,n;
	for(std::cin>>T;T;--T){
		std::stack<unsigned long long int>s;
		for(std::cin>>n;n;--n){
			std::string t;
			std::cin>>t; 
			if(t == "push"){
				unsigned long long x;
				std::cin>>x; s.push(x);
			}else if(t =="pop"){
				if(s.empty()) std::cout<<"Empty\n";
				else s.pop();
			}else if(t == "query"){
				if(s.empty()) std::cout<<"Anguei!\n";
				else
					std::cout<<s.top()<<'\n';
			}else{
				std::cout<<s.size()<<'\n';
			}
				}
		}
	return 0;
}
