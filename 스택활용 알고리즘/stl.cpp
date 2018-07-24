#include<iostream>
#include<string>

using namespace std;

int stack[200]; 
int toppointer=-1;

void push(int x)
{
	toppointer++;
	stack[toppointer] = x;
	//cout<<"push"<<toppointer<<endl;
}
void pop()
{
	if(toppointer > -1) toppointer--;
	//cout<<"pop"<<toppointer<<endl;
}
void size()
{
	if(toppointer==-1)
	{
		cout<<toppointer+1<<endl;
	}
	else
	{
		cout<<toppointer+1<<endl;
	}
	//cout<<"size"<<toppointer<<endl;
}
void top()
{
	if(toppointer == -1)
	{
		cout<<toppointer<<endl;
	}
	else
	{
		cout<<stack[toppointer]<<endl;
	}
	//cout<<"top"<<toppointer<<endl;
}
void empty()
{
	if(toppointer == -1)
	{
		cout<<"true"<<endl;
	}
	else
	{
		cout<<"false"<<endl;
	}
}
int main()
{
	int n;
	int tf=0;
	int start,end;
	cin>>n;
	
	string *input = new string[n];
	
	cin.ignore(); // getline 사용할 떄 버퍼 비워줘야 처음에 안 씹힌다 .
	for(int i=0;i<n;i++)
	{
		//getline은 공백으로 입력을 나누지 않고 \n으로 입력을 나눈다. 
		getline(cin,input[i]);
	}
	
	for(int i=0;i<n;i++)
	{
		//입력한 문자열에 push 문자열이 있을 경우 true 
		if(input[i].find("push") != string::npos)
		{		
			//push 시 공백  찾는 for 문 
			for(int j=0;j<input[i].length();j++)
			{
				if(input[i][j] == ' ')
				{
					// 공백이 시작되는 위치를 start 변수에 저 장  
					if(tf ==0 )
					{
						start=j;
						tf = 1;
					}
					//공백이 끝나는 위치를 end 변수에 저장  
					else
					{
						end=j;
					}
				}
			}
			int m = 1;
			int sum =0;
			//push 되는 숫자를 뒤에서부터 차례대로 sum에 더한다. (m을 통해 점차 10을 곱해서 더함) 
			for(int j=end-1;j>start;j--)
			{
				sum += (input[i][j]-48) * m;
				m = m*10;
			}
			// push되는 숫자sum을 push 
			push(sum);
		}
		else if(input[i].find("pop") != string::npos)
		{
			pop();
		}
		else if(input[i].find("top") != string::npos)
		{
			top();
		}
		else if(input[i].find("size") != string::npos)
		{
			size();
		}
		else if(input[i].find("empty") != string::npos)
		{
			empty();
		}
	}
}
