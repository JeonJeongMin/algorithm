#include<iostream>
#include<malloc.h>
#include<vector>
using namespace std;

int* parent;
vector<int>* adj;
int N;
void dfs(int v){
	for(int i=0;i<adj[v].size();i++){
		int next=adj[v][i];
		if(parent[next]==0){
			parent[next]=v;
			dfs(next);
		}
	}
	
}
int main(){
	
	cin>>N;
	parent=(int*)calloc(N+1,sizeof(int));
	adj=(vector<int>*)calloc(N+1,sizeof(vector<int>));
	
	for(int i=0;i<N-1;i++){
		int a,b;
		cin>>a>>b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	
	dfs(1);
	for(int i=2;i<=N;i++){
		cout<<parent[i]<<"\n";
	}
	
	return 0;
}
