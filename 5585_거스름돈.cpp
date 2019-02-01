#include<iostream>
using namespace std;
int main(){
	int n;
	int coin[6]={500,100,50,10,5,1};
	cin>>n; 
	n=1000-n;
	int cnt=0;
	
	while(n!=0){
		
		for(int i=0;i<6;i++){
			if(coin[i]<=n){
				n-=coin[i];
				cnt++;
				cout<<coin[i]<<endl;
				break;
			}
		
		}
	}
	cout<<cnt<<endl;
	return 0;
}
