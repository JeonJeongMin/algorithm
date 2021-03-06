#include<iostream>
#define MOD 1000000000
using namespace std;
int main(){
	int N;
	cin>>N;
	long dp[N+1][10]={0};
	
	for(int i=1;i<=9;i++){
		dp[1][i]=1;
	}
	for(int i=2;i<=N;i++){
		dp[i][0]=dp[i-1][1]%MOD;
		dp[i][9]=dp[i-1][8]%MOD;
		for(int j=1;j<=8;j++){
			dp[i][j]=(dp[i-1][j-1]+dp[i-1][j+1])%MOD;
		}
		
	}
	long sum=0;
	for(int i=0;i<=9;i++)
		sum+=dp[N][i];
	
	
	cout<<sum%MOD<<endl;
	return 0;
}
