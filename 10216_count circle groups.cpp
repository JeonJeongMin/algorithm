#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
int visited[3001] = { 0 };
int radius[3001] = { 0 };
vector <int> graph[3001];
vector <pair<int, int> > vc;
void init() {
	for (int i = 0; i < 3001; i++) {
		visited[i] = 0;
		radius[i] = 0;
		graph[i].clear();
	}
	vc.clear();
}
void showVisit() {
	cout << "Visit" << endl;
	int vc_size = vc.size();
	for (int i = 0; i < vc_size; i++) {
		cout << visited[i] << " ";
	}
	cout << endl;
}
void checkCircle() {
	int vc_size = vc.size();
	int ox = vc.back().first;
	int oy = vc.back().second;
	for (int i = 0; i < vc_size - 1; i++) {
		int dis = pow((vc[i].first - ox), 2) + pow((vc[i].second - oy), 2);
		int r2 = pow(radius[vc_size - 1] + radius[i],2);
		if (dis <= r2) {
			graph[i].push_back(vc_size - 1);
			graph[vc_size - 1].push_back(i);
		}
	}
}
void SearchGraph(int v) {
	visited[v] = 0;
	int node_size = graph[v].size();
	for (int w = 0; w < node_size; w++) {
		if (visited[graph[v][w]] != 0)
			SearchGraph(graph[v][w]);
	}
}

int main() {
	int T, num, x, y, r;
	cin >> T;
	for (int tc = 0; tc < T; tc++) {
		cin >> num;
		for (int i = 0; i < num; i++) {
			cin >> x >> y >> r;
			vc.push_back(make_pair(x, y));
			radius[i] = r;
			visited[i] = 1; 
			checkCircle();
		}
		int cnt = 0;
		for (int i = 0; i < num; i++) {

			//showVisit();
			if (visited[i] != 0) {
				SearchGraph(i);
				cnt++;
			}
		}
		cout << cnt << endl;
		init();
	}
	system("pause");
	return 0;
}