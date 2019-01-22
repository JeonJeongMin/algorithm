#include<iostream>
using namespace std;
int maps[101][101] = { 0 };
int dp[101][101] = { 0 };
int N;
int cnt = 0;
void init() {
	for (int i = 0; i < 101; i++) {
		for (int j = 0; j < 101; j++) {
			maps[i][j] = 0;
			dp[i][j] = 0;
		}
	}
}
void showMaps(int size) {
	cout << "Maps" << endl;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			cout << dp[i][j] << " ";
		}
		cout << endl;
	}
}

//void dfs(int x,int y){
//	if (x == N | y == N) {
//		cnt++;
//		return;
//	}
//	if (dp[x][y])
//		return;
//
//	if (x > N || y > N)
//		return;
//	if (!maps[x][y])//0ÀÌ¸י
//		return;
//
//	int dx = maps[x][y];
//
//	for (int i = x+1; i < x+dx; i++) {
//		dp[i][y] = 1;
//	}
//	for (int i = y + 1; i < y + dx; i++) {
//		dp[x][i] = 1;
//	}
//
//	dfs(x + dx, y);
//	dfs(x, y + dx);
//}

int main() {
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> maps[i][j];
		}
	}
	//dfs(0,0);
	dp[0][0] = 1;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (dp[i][j] == 0)
				continue;
			if (i == N-1 && j == N-1)
				continue;

			int dist = maps[i][j];
			int down = i + dist;
			int right = j + dist;

			if (down < N)
				dp[down][j] += dp[i][j];

			if (right < N)
				dp[i][right] += dp[i][j];

			showMaps(N);
		}
	}



	cout << dp[N-1][N-1] << endl;
	system("pause");
	return 0;
}