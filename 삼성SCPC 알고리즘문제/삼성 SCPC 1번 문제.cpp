#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
// 그리디 알고리즘을 통한 버스 타기 문제
// 삼성 SCPC 프로그래밍 1번 문제 
vector<int> a;
int main()
{
	int n,k;
	cin >> n >> k;
	
	for(int i=0;i<n;i++)
	{
		int x;
		cin >>x;
		a.push_back(x);
	}
	sort(a.begin(), a.end()); // 퀵 소트 
	
	int bus = 1;
	
	for(int i=1;i<a.size();i++)
	{
		if(a[i] - a[i - bus] <= k) bus++;
	}
	cout<< bus << endl;
}
