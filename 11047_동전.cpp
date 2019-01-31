#include<iostream>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	int *coin = new int[n]; 
	for(int i=0;i<n;i++){
		cin>>coin[i];
	}
	int sum=0;
	int cnt=0;
	while(k!=0){
		for(int i=n-1;i>=0;i--){
			if(k>=coin[i]){
				cnt++;
				k-=coin[i];
				break;
			}
		}
	}
	cout<<cnt<<endl;
	
	return 0;
}
