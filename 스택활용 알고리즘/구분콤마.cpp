#include <iostream>
#include <stack>
using namespace std;

stack<char> st;

int main()
{
	int n;
	
	cin>>n;
	
	char *temp = new char[n];
	int cnt = n%3;
	int count =0;
	cin>>temp;
	
	for(int i=n-1;i>=0;i--)
	{
		st.push(temp[i]);
	}
	
	for(int i=0;i<n;i++)
	{
		// n�� 3�� ����� �ƴ� �� ù��° �Ҽ��� ��� if ��  
		if(cnt != 0 && i == cnt)
		{
			cout<<','<<st.top();
			st.pop(); 
			count = 0;
		}
		// 3�ڸ� ���� , �����  
		else
		{
			if(count == 3)
			{
				cout<<','<<st.top();
				st.pop();
				count = 0;
			}
			else
			{
				cout<<st.top();
				st.pop();
			}
		}
		count++;
	}
}
