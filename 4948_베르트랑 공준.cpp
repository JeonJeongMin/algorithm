#include<iostream>
using namespace std;
int main(){
	int n[123456*2]={0};//0이면 소수, 1이면 소수가아님 
	for(int i=2;i<=123456*2;i++){
		for(int j=2;i*j<=123456*2;j++){
			n[i*j]=1;
		}
	}
	int a=1;
	n[0]=n[1]=1;

	
//	for(int i=2;i<100;i++){
//		if(n[i]==0)
//			cout<<i<<" ";
//	}
	
	while(a!=0){
		cin>>a;
		int cnt=0;
		
		for(int i=a+1;i<=2*a;i++){
			if(n[i]==0)
				cnt++; 
		}
		if(a!=0)
			cout<<cnt<<endl;
	}
	
	return 0;
}

