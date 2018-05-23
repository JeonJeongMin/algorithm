#include<iostream>
#include<algorithm>
using namespace std;
char map[26][26]={0};
int visit[26][26]={0};
int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};
int complex_cnt[625]={0};
//»ó¿ìÇÏÁÂ 
void dfs(int y, int x,int cnt){
	visit[y][x]=1;
	complex_cnt[cnt]++;
	for(int i=0;i<4;i++){
		int new_x=x+dx[i];
		int new_y=y+dy[i];
		if(!visit[new_y][new_x]&&map[new_y][new_x]){
			dfs(new_y,new_x,cnt);
		}
		
	}
	
}
int main(){
	 
	int N;
	cin>>N;
	for(int i=0;i<N;i++){
		cin>>map[i];
	}
	
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
		
			map[i][j]-=48;
		}
	}
	int cnt=0;
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			if(map[i][j]&&!visit[i][j]){
				dfs(i,j,cnt);
				cnt++;
			}
		}
	}
	cout<<cnt<<endl;
	sort(complex_cnt,complex_cnt+cnt);
	for(int i=0;i<cnt;i++){
		cout<<complex_cnt[i]<<endl;
	}
	
	return 0;
}
