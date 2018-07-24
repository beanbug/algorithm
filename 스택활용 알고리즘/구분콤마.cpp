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
		// n이 3의 배수가 아닐 때 첫번째 소숫점 찍는 if 문  
		if(cnt != 0 && i == cnt)
		{
			cout<<','<<st.top();
			st.pop(); 
			count = 0;
		}
		// 3자리 마다 , 찍어줌  
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
