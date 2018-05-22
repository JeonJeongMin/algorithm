#include<iostream>
using namespace std;
int main(){
	int M,N;
	cin>>M>>N;
	int sum=0;
	int min1=0;
	for(int i=1;i<=100;i++){
		int sq=i*i; 
		if(M<=sq&&sq<=N){
			if(!min1)
				min1=sq;
			sum+=sq;
		}
			
	}
	cout<<sum<<endl<<min1<<endl;
	
	return 0;
}


