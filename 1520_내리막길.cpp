#include<iostream>
using namespace std;

int arr[501][501]={0};
int dp[501][501]={0};
int dx[4]={0,1,0,-1};
int dy[4]={-1,0,1,0};
int m,n;
//»ó¿ìÇÏÁÂ 
int dfs(int y, int x){
	if(y==0&&x==0){
		return 1;
	}
	if(dp[y][x]==-1){
		dp[y][x]=0;
		for(int i=0;i<4;i++){
			int nx=x+dx[i];
			int ny=y+dy[i];
			if(ny<m&&ny>=0&&nx>=0&&nx<n&&arr[y][x]<arr[ny][nx])
				dp[y][x]+=dfs(ny,nx);
				
			
		}
	}
	return dp[y][x];
}
int main(){
	cin>>m>>n;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
			dp[i][j]=-1;
		}
	}
	
	
	cout<<dfs(m-1,n-1);
	
	return 0;
}



