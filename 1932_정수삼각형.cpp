#include<iostream>
using namespace std;
int main(){
	int N;
	cin>>N;
	int sum[N+1][N+1]={0};
	int tmp[N]={0};
	int max1=0;
	
	for(int i=1;i<=N;i++){
		for(int j=0;j<i;j++){	
			cin>>tmp[j];
			if(j==0)
				sum[i][j]=sum[i-1][j]+tmp[j];
			else if(j==i-1)
				sum[i][j]=sum[i-1][j-1]+tmp[j];
			else{
				if(sum[i-1][j-1]<sum[i-1][j])
					sum[i][j]=sum[i-1][j]+tmp[j];
				else
					sum[i][j]=sum[i-1][j-1]+tmp[j];
			}
			if(max1<sum[i][j])
				max1=sum[i][j];

		}
	}
	cout<<max1;
	
	return 0;
}
