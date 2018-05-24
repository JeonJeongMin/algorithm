#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int glass[n+1];
	for(int i=1;i<=n;i++){
		cin>>glass[i];
	}
	int dp[n+1]={0};
	dp[1]=glass[1];
	dp[2]=glass[1]+glass[2];
	
	for(int i=3;i<=n;i++){
		dp[i]=max(dp[i-2]+glass[i],max(dp[i-3]+glass[i-1]+glass[i],dp[i-1]));
		
	}
	int result = max(dp[n-1],dp[n]);
	cout<<result;
	
	return 0;
}

