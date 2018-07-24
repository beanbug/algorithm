#include<iostream>
#include<algorithm>

using namespace std;

char a[20];
int date[3];

char sex;
int year;
//주민 번호 앞자리를 생년월일로 구분하는 함 수 
void setdate()
{
	int j=0;
	for(int i=0;i<6;i++)
	{
		if(i%2==0)
		{
			date[j] = (a[i] - 48) * 10;
		}
		else
		{
			date[j] = date[j] + (a[i] - 48);
			j++;
		}
	}
}

int main()
{
	int t1,t2,year;
	char sex;
	scanf("%s",a);

	setdate();
	
	int first;
	for(int i=0;i<20;i++)
	{
		if(a[i] == '-')
		{
			first=i+1;
		}
	}
	
	if(a[first] == '1')
	{
		sex = 'M';
		year=1900;
	}
	else if(a[first] == '2')
	{
		year=1900;
		sex = 'F';
	}
	else if(a[first] == '3')
	{
		year=2000;
		sex = 'M';
	}
	else if(a[first] == '4')
	{
		year=2000;
		sex = 'F';
	} 
	
	printf("%d/%.2d/%.2d %c",date[0]+year,date[1],date[2],sex);
	return 0;
}
