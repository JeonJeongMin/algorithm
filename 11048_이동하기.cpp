#include<iostream>
using namespace std;

int main(){
	int maps[1001][1001]={0}; 
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>maps[i][j];
		}
	}
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(i==1&&j==1)
				continue;
			if(i==1){
				maps[i][j]+=maps[i][j-1];
			}
			else if(j==1){
				maps[i][j]+=maps[i-1][j];
			}
			else if(maps[i-1][j]<maps[i][j-1]){
				maps[i][j]+=maps[i][j-1];
			}
			else{
				maps[i][j]+=maps[i-1][j];
			}
			
			
		}
	}
	
	cout<<maps[n][m]<<endl;
	
	return 0;
}

