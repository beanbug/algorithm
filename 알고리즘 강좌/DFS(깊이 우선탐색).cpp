#include <iostream>
#include <vector>
// DFS 알고리즘 
using namespace std;

int c[7];
vector<int> a[8];

void dfs(int x){
	//방문 했던 노드라면 바로 다시 돌아가버린다. 
	if(c[x]) return; 
	
	//처음 방문헀던 노드라면 방문처리
	c[x] = true;
	cout<< x << ' ';
	
	for(int i=0;i<a[x].size();i++)
	{
		int y = a[x][i];
		dfs(y);
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
	
	dfs(1);
	return 0; 
}
