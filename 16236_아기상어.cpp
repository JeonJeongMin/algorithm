#include <iostream>
#include <queue>
using namespace std;
int maps[21][21] = { 0 };
int visited[21][21] = { 0 };
int len;
int dx[4] = { 0,-1,0,1 };
int dy[4] = { -1,0,1,0 };
int shark_size = 2;
int shark_evolve = 0;
int time = 0;
int breakFlag = 0;
int depth = 0;
queue <pair <int, int> > ans;
queue<pair<int, int> > q;

//map��� 
void print() {
	cout << endl;
	cout << "time: " << time << endl;
	cout << "shark_evolve: " << shark_evolve<<endl;
	cout << "shark_size: " << shark_size << endl;
	for (int i = 0; i<len; i++) {
		for (int j = 0; j<len; j++) {
			cout << maps[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

void init() {
	for (int i = 0; i<len; i++) {
		for (int j = 0; j<len; j++) {
			visited[i][j] = 0;
		}
	}
}

//bfsŽ��
void bfs(int y, int x) {

	int ref_y = y;
	int ref_x = x;

	visited[y][x] = 1;
	q.push(make_pair(y, x));

	int next_y, next_x;
	
	while(!q.empty()){

		int q_size = q.size();

		depth++;

		for (int tmp = 0; tmp < q_size; tmp++) {
			int new_y = q.front().first;
			int new_x = q.front().second;
			q.pop();

			//�����Ͽ� Ž��
			for (int i = 0; i < 4; i++) {
				new_y += dy[i];
				new_x += dx[i];
				//���������Ͽ� push
				//�湮�߰ų� shark���� ū �������̸� continue
				if (new_y >= len || new_x >= len || new_y < 0 || new_x < 0 || maps[new_y][new_x] > shark_size || visited[new_y][new_x]) {
					new_y -= dy[i];
					new_x -= dx[i];
					continue;
				}

				if (maps[new_y][new_x] < shark_size && maps[new_y][new_x] != 0) {//���� ���� ������� ���
					
					ans.push(make_pair(new_y, new_x));
					visited[new_y][new_x] = 1;
					new_y -= dy[i];
					new_x -= dx[i];

				}

				//���̰ų� ���� ���� ������� ���
				else {
					q.push(make_pair(new_y, new_x));
					visited[new_y][new_x] = 1;
					new_y -= dy[i];
					new_x -= dx[i];
				}

			}

		}

		int tmp_y, tmp_x;
		if (!ans.empty()) {
			int ans_size = ans.size();
			int max_y = 20;

			for (int tmp2 = 0; tmp2 < ans_size; tmp2++) {
				tmp_y = ans.front().first;
				tmp_x = ans.front().second;
				ans.pop();
				if (max_y > tmp_y) {
					max_y = tmp_y;

					next_y = tmp_y;
					next_x = tmp_x;
				}

			}
			while (!ans.empty())
				ans.pop();

			//����� �����
			maps[next_y][next_x] = 0;


			//��ȭ ������ ���
			shark_evolve++;

			//�ڽ��� ����ŭ ����⸦ ������ 1�� ��ȭ
			if (shark_evolve == shark_size) {
				shark_size++;
				shark_evolve = 0;
			}

			//�ð����
			time += depth;


			//print();

			//q�������
			while (!q.empty()) {
				q.pop();
			}
			// visit init
			init();
			depth = 0;
			breakFlag = 1;
			break;

		}
	}
	if(breakFlag){
		breakFlag = 0;
		bfs(next_y, next_x);
	}
}

int main() {

	cin >> len;
	int sh_x, sh_y;
	for (int i = 0; i<len; i++) {
		for (int j = 0; j<len; j++) {
			cin >> maps[i][j];
			if (maps[i][j] == 9) {
				sh_y = i;
				sh_x = j;
			}
		}
	}


	maps[sh_y][sh_x] = 0;
	bfs(sh_y, sh_x);
	//cout << "ans:" << time;
	cout << time;
	//print();



	return 0;
}