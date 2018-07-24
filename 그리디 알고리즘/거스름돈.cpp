#include<iostream>

using namespace std;

int main()
{
	int money[] = {50000,10000,5000,1000,500,100,50,10};
	int cnt=0;
	int input;
	
	cin >> input;
	
	for(int i=0;i<sizeof(money)/sizeof(int);i++)
	{
		while(input >= money[i])
		{
			input = input - money[i];
			cnt++;
		}
	}
	
}
