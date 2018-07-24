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
	
	cin.ignore(); // getline ����� �� ���� ������ ó���� �� ������ .
	for(int i=0;i<n;i++)
	{
		//getline�� �������� �Է��� ������ �ʰ� \n���� �Է��� ������. 
		getline(cin,input[i]);
	}
	
	for(int i=0;i<n;i++)
	{
		//�Է��� ���ڿ��� push ���ڿ��� ���� ��� true 
		if(input[i].find("push") != string::npos)
		{		
			//push �� ����  ã�� for �� 
			for(int j=0;j<input[i].length();j++)
			{
				if(input[i][j] == ' ')
				{
					// ������ ���۵Ǵ� ��ġ�� start ������ �� ��  
					if(tf ==0 )
					{
						start=j;
						tf = 1;
					}
					//������ ������ ��ġ�� end ������ ����  
					else
					{
						end=j;
					}
				}
			}
			int m = 1;
			int sum =0;
			//push �Ǵ� ���ڸ� �ڿ������� ���ʴ�� sum�� ���Ѵ�. (m�� ���� ���� 10�� ���ؼ� ����) 
			for(int j=end-1;j>start;j--)
			{
				sum += (input[i][j]-48) * m;
				m = m*10;
			}
			// push�Ǵ� ����sum�� push 
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
