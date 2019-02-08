#include<iostream>
using namespace std;
int main(){
	int T;
	cin>>T;
	for(int tc=0;tc<T;tc++){
		int n;
		cin>>n;
		int **arr = new int*[2];
		int **dp = new int*[2];
		for(int i=0;i<2;i++){
			arr[i]= new int[n];
			dp[i]= new int[n];
		}
		
		for(int i=0;i<n;i++){
			cin>>arr[0][i];
		}
		for(int i=0;i<n;i++){
			cin>>arr[1][i];
		}
		
		dp[0][0]=arr[0][0];
		dp[1][0]=arr[1][0];
		dp[0][1]=dp[1][0]+arr[0][1];
		dp[1][1]=dp[0][0]+arr[1][1];
		
		for(int i=2;i<n;i++){
			dp[0][i]= max(dp[1][i-1],dp[1][i-2])+arr[0][i];
			dp[1][i]= max(dp[0][i-1],dp[0][i-2])+arr[1][i];
		}
	
	cout<<max(dp[0][n-1],dp[1][n-1])<<endl;

	}
	
	
	return 0;
}
