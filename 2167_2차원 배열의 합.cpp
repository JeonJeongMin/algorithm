#include<iostream>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int arr[301][301]={0};
		
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>arr[i][j];
		}
	}
	int k;
	cin>>k;
	for(int i=0;i<k;i++){
		int a,b,c,d;
		cin>>a>>b>>c>>d;
		int sum=0;
		for(int q=a;q<=c;q++){
			for(int p=b;p<=d;p++){
				sum+=arr[q][p];
			}
			
		}
		cout<<sum<<endl;
	}
	
	
//	for(int i=1;i<=n;i++){
//		for(int j=1;j<=m;j++){
//			cout<<arr[i][j]<<" ";
//		}
//		cout<<endl;
//	}
	return 0;
}

