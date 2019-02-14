#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[1001][10];
	for(int i=0;i<10;i++){
		arr[1][i]=1;
	} 
	for(int i=2;i<=n;i++){
		for(int j=0;j<10;j++){
			int tmp=0;
			for(int k=j;k<10;k++){
				tmp += arr[i-1][k];
			}
			arr[i][j]=tmp%10007;
			
		}
		
	}
	int sum=0;
	for(int i=0;i<10;i++){
		sum+=arr[n][i]%10007;
	}
	
	cout<<sum;
	
	return 0;
}

