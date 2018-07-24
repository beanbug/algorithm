#include<iostream>
#include<queue>
using namespace std;

int a[7][7];
int check[7][7] = {0};
vector<int> b[7][7];
int direction[4][2] = {{1,0},{-1,0},{0,1},{0,-1}}; 
int cnt = 0;

// 상, 하, 좌, 우로 이동했을 때 7x7 배열 안인지인 확 인  
bool isInside(int x, int y){
	return (x>=0 && x<=6) && (y>=0 && y<=6);
}
// 상, 하, 좌, 우의 블록과 컬러가 같은지 확 인  
bool isColor(int cur_x,int cur_y,int next_x,int next_y){
	return a[cur_x][cur_y] == a[next_x][next_y];
}

int bfs(int x,int y){
	int cur_x = x;
	int cur_y = y;
	int count = 0 ;
	queue<pair<int, int> > q;
	
	q.push(pair<int, int>(cur_x, cur_y));
	check[cur_x][cur_y] = 1;
	//연결된 노드가 없을때 까지 반 복  
	while(!q.empty()){
		cur_x = q.front().first;
		cur_y = q.front().second;
		
		q.pop();
		count++;
		for(int i=0;i<4;i++){
			int next_x = cur_x + direction[i][0];
			int next_y = cur_y + direction[i][1];
			// 상하좌우로 움직였을 경우 7x7 배열안인지 확인, 상하좌우와 같은 컬러인지 확인, 체크했던 블록인지 확인  
			if(isInside(next_x,next_y) && isColor(cur_x,cur_y,next_x,next_y) && check[next_x][next_y] == 0)
			{
				// 상태를 체크했다고 바꿔주고 큐에 넣는다. 
				check[next_x][next_y] = 1;
				q.push(pair<int, int>(next_x, next_y));
			}
		}
	}
	//연결된 노드가 3개 이상일 때 터지는 카운트 증 가  
	if( count >= 3 ) cnt++;
}	

int main()
{
	// 캔디팡 숫자 입력받 음  
	for(int i=0;i<7;i++)
	{
		for(int j=0;j<7;j++)
		{
			cin >> a[i][j];
		}
	}
	
	for(int i=0;i<7;i++)
	{
		for(int j=0;j<7;j++)
		{
			// 이미 확인된 노드는 검색하지 않겠다. 
			if( check[i][j] == 0) bfs(i,j);
		}
	}
	
	cout << cnt << endl;
}
