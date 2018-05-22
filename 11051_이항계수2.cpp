#include<iostream>
using namespace std;
int arr[1001][1001]={0};
int func(int N,int K){
	if(arr[N][K])
		return arr[N][K];
	if(N==K||K==0)
		return arr[N][K]=1;
	else
		return arr[N][K]=(func(N-1,K-1)+func(N-1,K))%10007;

}
int main(){
	int N,K;
	cin>>N>>K;
	arr[1][1]=arr[1][0]=0;
	cout<<func(N,K)<<endl;
	return 0;
}


