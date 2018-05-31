#include<iostream>
using namespace std;
int map[1001][1001]={0};
int visit[1001]={0};
int size;
int cnt=0;
void dfs(int v){
	visit[v]=1;
	for(int i=1;i<=size;i++){
		if(!visit[i]&&map[v][i]){
			dfs(i);
		}
	}
}
int main(){
	int T;
	int tmp;
	cin>>T;
	for(int tc=1;tc<=T;tc++){
		cnt=0;
		cin>>size;
		for(int i=1;i<=size;i++){	
			cin>>tmp;
			map[i][tmp]=1;
		}
		for(int j=1;j<=size;j++){
			if(!visit[j]){
				dfs(j);
				cnt++;
				}
		}			
		cout<<cnt<<endl;
		for(int i=1;i<=size;i++){
			for(int j=1;j<=size;j++){
				map[i][j]=0;
			}
			visit[i]=0;
		}
	}
	return 0;
}

