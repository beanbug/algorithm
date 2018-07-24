#include<iostream>

using namespace std;

int main()
{
	
	float a,b;
	
	cin>>a>>b;
	
	float x = b/(-a);  // ax + b = 0   ->     x = (-b) / a
	cout << fixed;     
	cout.setf(ios::showpoint); // 끝의 0을 표시
	cout.precision(4);  // 소수점 이후 자리 수 설정  
	cout<<x;
}
