#include<iostream>
using namespace std;
int main(){
	int N;
	cin>>N;
	int home[N+1][3]={0};//0:R 1:G 2:B
	int dp[N+1][3]={0};
	for(int i=1;i<N+1;i++){
		for(int j=0;j<3;j++){
			cin>>home[i][j];
		}
	}
	
	for(int i=1;i<N+1;i++){
		dp[i][0]=min(dp[i-1][1],dp[i-1][2])+home[i][0];
		dp[i][1]=min(dp[i-1][0],dp[i-1][2])+home[i][1];
		dp[i][2]=min(dp[i-1][0],dp[i-1][1])+home[i][2];

	} 
	
	cout<<min(dp[N][0],min(dp[N][1],dp[N][2]))<<endl;
	
	return 0;
}
