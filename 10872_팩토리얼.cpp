#include<iostream>
using namespace std;
int f[13]={0};
int fact(int N){
	if(f[N])
		return f[N];
	if(N==1)
		return f[N]=1;
	else
		return f[N]=N*fact(N-1);
}
int main(){
	int N;
	cin>>N;
	if(N==0)
		cout<<"1"<<endl;
	else
		cout<<fact(N);
	
	return 0;
}



