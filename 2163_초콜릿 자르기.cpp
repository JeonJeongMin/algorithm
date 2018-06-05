#include<iostream>
using namespace std;

int dp[301][301]={0};
int m,n;
int main(){
	cin>>n>>m;
	dp[2][2]=3;
	for(int i=1;i<=300;i++){
		dp[i][1]=dp[1][i]=i-1;
	}
	
	for(int i=2;i<=n;i++){
		for(int j=2;j<=m;j++){
			if(i==2&&j==2)
				continue;
			
			if(i<=j){
				if(j%2==1)
					dp[i][j]=dp[i][j/2]+dp[i][j/2+1]+1;
				else
					dp[i][j]=2*dp[i][j/2]+1;
			}
			else{
				if(i%2==1)
					dp[i][j]=dp[i/2][j]+dp[i/2+1][j]+1;
				else
					dp[i][j]=2*dp[i/2][j]+1;
			}
		}
	}
	
	cout<<dp[n][m];
	
	return 0;
}

