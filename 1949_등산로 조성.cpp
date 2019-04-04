#include<iostream>
#include<vector>
using namespace std;

int len, k;
int dx[4] = { 0,1,0,-1 };
int dy[4] = { 1,0,-1,0 };
int visit[8][8] = { 0 };
int map[8][8] = { 0 };
int max_depth = 0;
int kFlag = 1;//한번의 힌트를 썼는지 1:아직안씀 0:벌써 씀

//방문 배열 초기화
void init() {
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			visit[i][j] = 0;
			map[i][j] = 0;
		}
	}
	max_depth = 0;
}

//dfs 탐색
void dfs(int y, int x, int depth) {

	
	if(y>=len || y<0 || x>=len || x<0)
		return;

	//순회 출력
	//cout << y << " " << x << " " << map[y][x] << endl;

	//깊이 가 가장 큰 값 저장
	if (max_depth < depth)
		max_depth = depth;

	visit[y][x] = 1;
	int new_x, new_y;

	for (int i = 0; i < 4; i++) {
		new_y = y + dy[i];
		new_x = x + dx[i];

		//새로운 노두가 방문했으면 continue
		if (visit[new_y][new_x])
			continue;

		//기존 값보다 작으면
		if (map[y][x] > map[new_y][new_x])
			dfs(new_y, new_x, depth+1);

		//기존값보다 작진 않지만 k만큼의 힌트를 쓰는 경우
		else if (kFlag) {
			kFlag = 0;
			for (int j = 1; j <= k; j++) {
				map[new_y][new_x] -= j;

				//힌트 쓴 후에 기존 값보다 작으면
				if (map[y][x] > map[new_y][new_x])
					dfs(new_y, new_x, depth + 1);


				map[new_y][new_x] += j;
			}
			kFlag = 1;

		}
	}

	visit[y][x] = 0;
}

//map 출력
void print() {
	cout << endl << "PRINT MAP!" << endl;
	
	for (int i = 0; i < len; i++) {
		for (int j = 0; j < len; j++) {
			cout << map[i][j] << " ";
		}
		cout << endl;
	}
}
int main() {

	int n;
	cin >> n;

	for (int tc = 0; tc < n; tc++) {

		init();

		//algorithm

		cin >> len >> k;
		int max_ = 0;

		//데이터 입력
		for (int i = 0; i < len; i++) {
			for (int j = 0; j < len; j++) {
				cin >> map[i][j];
				if (max_ < map[i][j])
					max_ = map[i][j];
			}
		}

		//maximum값으로부터 dfs
		for (int i = 0; i < len; i++) {
			for (int j = 0; j < len; j++) {
				if (map[i][j] == max_) {
					kFlag = 1;
					dfs(i, j, 1);
				}
			}
		}
		
		//print();

		cout << "#" << tc+1 << " " << max_depth << endl;

	}

	system("pause");

	return 0;
}
