#include<iostream>
using namespace std;
int main(){
	int N; 
	cin>>N;
	int mok=N/5;
	int result;
	int i;
	for(i=mok;i>=0;i--){
		if((N-i*5)%3==0){
			result=i+(N-i*5)/3;
			break;
		}
	}
	if(i==-1)
		cout<<"-1"<<endl;
	else
		cout<<result<<endl;

	return 0;
}
