#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
// �׸��� �˰����� ���� ���� Ÿ�� ����
// �Ｚ SCPC ���α׷��� 1�� ���� 
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
	sort(a.begin(), a.end()); // �� ��Ʈ 
	
	int bus = 1;
	
	for(int i=1;i<a.size();i++)
	{
		if(a[i] - a[i - bus] <= k) bus++;
	}
	cout<< bus << endl;
}
