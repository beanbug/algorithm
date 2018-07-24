#include <iostream>
#include <algorithm>
#include <sstream>

using namespace std;

int circular[10001]; //ȸ���� ��� �迭
int cnt = 0;

bool isPalindrome(int x) //ȸ�� ���� �ƴ��� Ȯ���ϴ� �Լ� 
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

int one(int x) // ȸ�� �ϳ��� ǥ���������� Ȯ���ϴ� �Լ�
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

int two(int x) // ȸ�� �ΰ���  ǥ���������� Ȯ���ϴ� �Լ�
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

int three(int x) // ȸ�� ������  ǥ���������� Ȯ���ϴ� �Լ�
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
	int n;�� 
	cin >> n;
	if(!one(n) && !two(n) && !three(n)) // ȸ�� 1~3���� ǥ�� �ȵɰ�� 0 �� 
	{
		cout << '0' << endl;
	}
	return 0;
}
