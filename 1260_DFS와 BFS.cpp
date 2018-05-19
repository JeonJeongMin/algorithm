#include<iostream>
#include<malloc.h>
#include<queue>
using namespace std;
int** map;
int* visit;
int N, M ,v;
queue<int> q;
void dfs(int v){
	visit[v]=1;
	cout<<v<<" ";
	for(int w=1;w<=N;w++){
		if(!visit[w]&&map[v][w])
			dfs(w);
	}
}
void bfs(int v){
	visit[v]=1;
	cout<<v<<" ";
	for(int w=1;w<=N;w++){
		if(!visit[w]&&map[v][w]){
			q.push(w);
			visit[w]=1;
		}
	}
	int a;
	if(a=q.front()){
		q.pop();
		bfs(a);
	}
}
int main(){
	cin>>N>>M>>v;
	
	map = (int**)calloc(N+1,sizeof(int*));
	for(int i=0;i<N+1;i++){
		map[i]=(int*)calloc(N+1,sizeof(int));
	}
	visit = (int*)calloc(N+1,sizeof(int*));
	
	int tmp1,tmp2;
	for(int i=0;i<M;i++){
		cin>>tmp1>>tmp2;
		map[tmp2][tmp1]=map[tmp1][tmp2]=1;
		
	}
	
	dfs(v); 
	cout<<endl;
	for(int i=1;i<N+1;i++)
		visit[i]=0;
	bfs(v);


	

	
	
	
	
	
	
	
	
	delete[] visit;
	for(int i=0;i<N+1;i++)
		free(map[i]);
	free(map);
	
	return 0;
}

//2차원배열을 dfs bfs쓸때 map크기를 동적으로 생성하는법 
