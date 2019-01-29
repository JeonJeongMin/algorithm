#include<iostream>
#include<malloc.h>
using namespace std;

int main(){
	int N;
	cin>>N;
	int *p = new int[N+1];
	int *dp = new int[N+1];
	for(int i=1;i<=N;i++){
		cin>>p[i];
		dp[i]=p[i];
	} 
	for(int i=1;i<=N;i++){
		for(int j=1;j<=i/2;j++){
			int tmp = dp[j]+dp[i-j];
			if(tmp>dp[i])
				dp[i]=tmp;
		}
	}
	
	
//	for(int i=1;i<=N;i++){
//		cout<<dp[i]<<" ";
//	}
//	cout<<endl;
	
	
	cout<<dp[N];
	
	delete[] p;
	delete[] dp;
	
	return 0;
}
