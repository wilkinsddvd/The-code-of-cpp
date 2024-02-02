#include<iostream>
using namespace std;

int main()
{
	float money,price1,price2,price3,result1,result2,result3;
	int power,a1,a2,a3,b,b1,b2,b3,c,c1,c2;
	cin>>power;
	if(power<150){
		price1 = 0.4463;
		b1 = power*price1;
		money = power*price2;
		a1 = (money*10)/1000;
		result1 = b1 + a1/10;
		cout<<result1;
		}
		if(power<400)
		{
			price2 = 0.4;
			b2 = power*price2;
			money = power*price2;
			a2 = (money*10)/1000;
			result2 = b2 + a2/10;
			cout<<result2;
		}
			if(power<10000)
			{
				price3 = 0.5;
				b3 = power*price3;
				money = power*price3;
				a3 = (money*10)/1000;
				result3 = b3 + a3/10;
				cout<<result3; 
			}
}
