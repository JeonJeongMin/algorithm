#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> g[10001];
int cnt;
int visited[10001] = { 0 };
int node_cnt[10001] = { 0 };
int N, M, a, b;

void dfs(int v,int origin_n) {
	
	visited[v] = 1;
	int g_size = g[v].size();
	for (int i = 0; i < g_size; i++) {
		if (!visited[g[v][i]]) {
			node_cnt[origin_n]++;
			dfs(g[v][i], origin_n);
		}
	}
}
void init() {
	for (int i = 1; i < N+1; i++) {
		visited[i] = 0;
	}
}
int main() {
	cin >> N >> M;
	
	for (int i = 0; i < M; i++) {
		scanf_s("%d %d", &a, &b);
		g[b].push_back(a);
	}
	for (int i = 1; i < N+1; i++) {
		cnt = 0;
		init();
		dfs(i,i);
	}

	int max_=0;
	for (int i = 1; i < N + 1; i++){
		if (max_ < node_cnt[i])
			max_ = node_cnt[i];
	}

	for (int i = 1; i < N + 1; i++) {
		if (node_cnt[i]==max_)
			cout << i << " ";
	}
	cout << endl;


	system("pause");
	return 0;
}