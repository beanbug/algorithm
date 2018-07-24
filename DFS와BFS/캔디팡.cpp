#include<iostream>
#include<queue>
using namespace std;

int a[7][7];
int check[7][7] = {0};
vector<int> b[7][7];
int direction[4][2] = {{1,0},{-1,0},{0,1},{0,-1}}; 
int cnt = 0;

// ��, ��, ��, ��� �̵����� �� 7x7 �迭 �������� Ȯ ��  
bool isInside(int x, int y){
	return (x>=0 && x<=6) && (y>=0 && y<=6);
}
// ��, ��, ��, ���� ��ϰ� �÷��� ������ Ȯ ��  
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
	//����� ��尡 ������ ���� �� ��  
	while(!q.empty()){
		cur_x = q.front().first;
		cur_y = q.front().second;
		
		q.pop();
		count++;
		for(int i=0;i<4;i++){
			int next_x = cur_x + direction[i][0];
			int next_y = cur_y + direction[i][1];
			// �����¿�� �������� ��� 7x7 �迭������ Ȯ��, �����¿�� ���� �÷����� Ȯ��, üũ�ߴ� ������� Ȯ��  
			if(isInside(next_x,next_y) && isColor(cur_x,cur_y,next_x,next_y) && check[next_x][next_y] == 0)
			{
				// ���¸� üũ�ߴٰ� �ٲ��ְ� ť�� �ִ´�. 
				check[next_x][next_y] = 1;
				q.push(pair<int, int>(next_x, next_y));
			}
		}
	}
	//����� ��尡 3�� �̻��� �� ������ ī��Ʈ �� ��  
	if( count >= 3 ) cnt++;
}	

int main()
{
	// ĵ���� ���� �Է¹� ��  
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
			// �̹� Ȯ�ε� ���� �˻����� �ʰڴ�. 
			if( check[i][j] == 0) bfs(i,j);
		}
	}
	
	cout << cnt << endl;
}
