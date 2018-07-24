#include <iostream>
#include <algorithm>
#include <sstream>

using namespace std;

int circular[10001]; //회문을 담는 배열
int cnt = 0;

bool isPalindrome(int x) //회문 인지 아닌지 확인하는 함수 
{
	stringstream ss;
	ss << x;
	string str = ss.str();
	for(int i=0;i<str.length();i++)
	{
		if(str[i] != str[str.length() -1 -i]) return false;
	}
	return true;
}

int one(int x) // 회문 하나로 표현가능한지 확인하는 함수
{
	for(int i=0;i<cnt;i++)
	{
		if(circular[i] == x)
		{
			cout << 1 << ' ' << circular[i] << endl;
			return true;
		}
	}
	return false;
}

int two(int x) // 회문 두개로  표현가능한지 확인하는 함수
{
	for(int i=0;i<cnt;i++)
	{
		for(int j=0;j<cnt;j++)
		{
			if(circular[i] + circular[j]== x)
			{
			cout << 2 << ' ' << circular[j] << ' ' << circular[i] << endl;
			return true;
			}
		}
	}
	return false;
}

int three(int x) // 회문 세개로  표현가능한지 확인하는 함수
{
	for(int i=0;i<cnt;i++)
	{
		for(int j=0;j<cnt;j++)
		{
			for(int k=0;k<cnt;k++)
			{
				if(circular[i] + circular[j] + circular[k] == x)
				{
				cout << 3 << ' ' << circular[k] << ' ' << circular[j] << ' ' << circular[i] << endl;
				return true;
				}
			}
		}
	}
	return false;
}
int main()
{
	for (int i=0;i<=10000;i++)
	{
		if(isPalindrome(i))
		{
			circular[cnt]=i;
			cnt++;
		}
	}
	int n;력 
	cin >> n;
	if(!one(n) && !two(n) && !three(n)) // 회문 1~3개로 표현 안될경우 0 출 
	{
		cout << '0' << endl;
	}
	return 0;
}
