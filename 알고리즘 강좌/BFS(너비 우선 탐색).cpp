#include <iostream>
#include <queue>
#include <vector>
//BFS 알고리즘 
using namespace std;

int c[7]; // 방문 처리를 위한 배열  
vector<int> a[8]; 


void bfs(int start)
{
	queue<int> q;
	q.push(start);
	c[start] = true; // true = 방문처리 
	
	// 큐가 empty 일 때 까지 반복 
	while(!q.empty())
	{
		//큐에서 하나 꺼냄 
		int x = q.front();
		q.pop();
		printf("%d ",x);
		
		//현재 큐에서 꺼낸 노드와 인접한  노드들을 하나씩 방문 
		for(int i=0;i<a[x].size();i++)
		{
			int y = a[x][i];
			
			//방문을 하지 않은 노드라면 큐에 push  
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
	//1과 2를 연결 
	a[1].push_back(2);
	a[2].push_back(1);
	
	//1과 3을 연결 
	a[1].push_back(3);
	a[3].push_back(1);
	
	//2와 3을 연결 
	a[2].push_back(3);
	a[3].push_back(2);
	
	//2와 4를 연결 
	a[4].push_back(2);
	a[2].push_back(4);
	
	//2와 5를 연결 
	a[5].push_back(2);
	a[2].push_back(5);
	
	//3과 6을 연결 
	a[3].push_back(6);
	a[6].push_back(3);
	
	//3과 7을 연결 
	a[3].push_back(7);
	a[7].push_back(3);
	
	//4와 5를 연결 
	a[4].push_back(5);
	a[5].push_back(4);
	
	//6과 7을 연결 
	a[6].push_back(7);
	a[7].push_back(6);
	
	bfs(1);
	return 0;
}
