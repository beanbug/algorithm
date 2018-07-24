#include<iostream>

using namespace std;

int main()
{
	int pasta[3];
	int fruit[2];
	int pastaprice=9999;
	int fruitprice=9999;
	
	for(int i=0;i<3;i++)
	{
		cin>>pasta[i];
	}
	for(int i=0;i<2;i++)
	{
		cin>>fruit[i];
	}
	
	for(int i=0;i<3;i++)
	{
		if(pasta[i] < pastaprice)
		{
			pastaprice = pasta[i];
		}
	}
	for(int i=0;i<2;i++)
	{
		if(fruit[i] < fruitprice)
		{
			fruitprice = fruit[i];
		}
	}
	
	float totalprice = fruitprice + pastaprice + float((fruitprice+pastaprice))/10;
	cout << fixed;     
	cout.setf(ios::showpoint); // 끝의 0을 표시
	cout.precision(1);  // 소수점 이후 자리 수 설정  
	cout<<totalprice<<endl;
}
