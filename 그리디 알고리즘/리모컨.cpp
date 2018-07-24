#include<iostream>

using namespace std;

int main()
{
	int current;
	int object;
	
	int downoption [] = {-10,-5,-1};
	int upoption [] = {10,5,1};
	int cnt = 0;
	cin>> current >> object;
	
	if(current > object)
	{
		for(int i=0;i<3;i++)
		{
			while(current > object && current + downoption[i] >= object)
			{
				current = current + downoption[i];
				cnt++;
				//cout<<current<<' '; 
			}
		}
	}
	else
	{
		for(int i=0;i<3;i++)
		{
			while(current < object && current + upoption[i] <= object)
			{
				current = current + upoption[i];
				cnt++;
			}
		}
	}
	cout<< cnt << endl;
}
