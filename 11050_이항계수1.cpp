#include<iostream>
using namespace std;
int main(){
	int N,K;
	cin>>N>>K;
	int result=1;
	for(int i=N;i>N-K;i--){
		result*=i;
	}
	for(int k=2;k<=K;k++){
		result/=k;
	} 
	cout<<result;

	return 0;
}
