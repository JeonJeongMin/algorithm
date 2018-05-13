#include<iostream>
#include<vector>
using namespace std;
#define MAX_V 101
int graph[MAX_V][MAX_V];
int visit[MAX_V];
int v_n, edge_n;
int num_virus=-1;

void dfs(int v){
	visit[v]=1;
	num_virus++;
	for(int i=1;i<=v_n;i++){
		if(!visit[i]&&graph[v][i]){
			dfs(i);
		}
	}
}
int main(){
	cin>>v_n>>edge_n;
	int v, w;
	for(int i=0;i<=v_n;i++){
		for(int j=0;j<=v_n;j++){
			graph[i][j]=0;
		}
		visit[i]=0;
	}
	for(int i=1;i<=edge_n;i++){
		cin>>v>>w;
		graph[v][w]=graph[w][v]=1;
	}
	dfs(1);
	cout<<num_virus<<endl;
	return 0;
}

