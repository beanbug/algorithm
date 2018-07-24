#include <iostream>
#include <queue>
#include <vector>
//BFS �˰��� 
using namespace std;

int c[7]; // �湮 ó���� ���� �迭  
vector<int> a[8]; 


void bfs(int start)
{
	queue<int> q;
	q.push(start);
	c[start] = true; // true = �湮ó�� 
	
	// ť�� empty �� �� ���� �ݺ� 
	while(!q.empty())
	{
		//ť���� �ϳ� ���� 
		int x = q.front();
		q.pop();
		printf("%d ",x);
		
		//���� ť���� ���� ���� ������  ������ �ϳ��� �湮 
		for(int i=0;i<a[x].size();i++)
		{
			int y = a[x][i];
			
			//�湮�� ���� ���� ����� ť�� push  
			if(!c[y])
			{
				q.push(y);
				c[y] = true;
			}
		}
	}
}
int main()
{
	//1�� 2�� ���� 
	a[1].push_back(2);
	a[2].push_back(1);
	
	//1�� 3�� ���� 
	a[1].push_back(3);
	a[3].push_back(1);
	
	//2�� 3�� ���� 
	a[2].push_back(3);
	a[3].push_back(2);
	
	//2�� 4�� ���� 
	a[4].push_back(2);
	a[2].push_back(4);
	
	//2�� 5�� ���� 
	a[5].push_back(2);
	a[2].push_back(5);
	
	//3�� 6�� ���� 
	a[3].push_back(6);
	a[6].push_back(3);
	
	//3�� 7�� ���� 
	a[3].push_back(7);
	a[7].push_back(3);
	
	//4�� 5�� ���� 
	a[4].push_back(5);
	a[5].push_back(4);
	
	//6�� 7�� ���� 
	a[6].push_back(7);
	a[7].push_back(6);
	
	bfs(1);
	return 0;
}
