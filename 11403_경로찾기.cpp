#include<iostream>
using namespace std;
int maps[101][101]={0};
int con[101][101]={0};
int visited[101]={0};
int n;
int dfs(int v,int pres){
	for(int i=0;i<n;i++){
		if(!visited[i]&&maps[pres][i]){
			visited[i]=1;
			con[v][i]=1;
			dfs(v, i);
		}		
	}
	
}
void init(){
	for(int i=0;i<n;i++){
		visited[i]=0;
	}
}
int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>maps[i][j];
		}
	}
	for(int i=0;i<n;i++){
		dfs(i, i);
		init();	
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<con[i][j]<<" ";
		}
		cout<<endl; 
	}

	
	return 0;
}
