#include<iostream>
using namespace std;
int main(){
	int N;
	cin>>N;
	int step[N+1]={0};
	int dp[N+1]={0};
	int flag=0; 
	for(int i=1;i<=N;i++){
		cin>>step[i];
	}
	dp[1]=step[1];
	dp[2]=step[1]+step[2];
	for(int i=3;i<=N;i++){
		dp[i]=max(dp[i-2]+step[i],dp[i-3]+step[i-1]+step[i]);
	}
	cout<<dp[N];
	
	return 0;
}


