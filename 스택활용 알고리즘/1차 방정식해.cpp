#include<iostream>

using namespace std;

int main()
{
	
	float a,b;
	
	cin>>a>>b;
	
	float x = b/(-a);  // ax + b = 0   ->     x = (-b) / a
	cout << fixed;     
	cout.setf(ios::showpoint); // ���� 0�� ǥ��
	cout.precision(4);  // �Ҽ��� ���� �ڸ� �� ����  
	cout<<x;
}
