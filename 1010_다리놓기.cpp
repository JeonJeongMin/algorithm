#include<iostream>
using namespace std;
int arr[31][31]={0};
int comb(){
	arr[0][0]=0;
	for(int i=1;i<30;i++){
		arr[0][i]=1;
		arr[i][0]=1;
	}
	for(int i=1;i<30;i++){
		for(int j=1;j<=i;j++){
			arr[i][j]=arr[i-1][j]+arr[i-1][j-1];
		}
	}
	
	
}
int main(){
	
	int T;
	cin>>T;
	comb();
	for(int tc=0;tc<T;tc++){
		int a,b;
		cin>>a>>b;
		cout<<arr[b][a]<<endl;
	}
	
	
	return 0;
}
