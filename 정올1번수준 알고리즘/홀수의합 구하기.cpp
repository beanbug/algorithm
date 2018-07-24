#include<iostream>

using namespace std;

int main()
{
	int a[7];
	int sum=0;
	
	for(int i=0;i<7;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<7;i++)
	{
		if(a[i]%2==1)
		{
			sum+=a[i];
		}
	}
	if(sum == 0)
	{
		sum = -1;
	}
	printf("%d",sum);
}
