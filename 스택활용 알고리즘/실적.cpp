#include<iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	
	int *score = new int[n];
	int top=0;
	
	for(int i=0;i<n;i++)
	{
		cin>> score[top];
		if(score[top] == 0)
		{
			top--;
			score[top] = 0;
		}
		else top++;
		
	}
	
	int sum = 0;
	for(int i=0;i<n;i++)
	{
		sum += score[i];
	}
	
	cout << sum <<endl;
	
	delete [] score;
}
