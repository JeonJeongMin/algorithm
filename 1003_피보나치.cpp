#include<iostream>
using namespace std;
int value[40]={0};
int fibonacci(int n) {
	if(value[n]>0){
		return value[n];
	}
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
    	value[n]=fibonacci(n-1) + fibonacci(n-2);
        return value[n];
    }
}

int main(){
	int T,N;
	cin>>T;
	
	for(int i=0;i<T;i++){
		cin>>N;
		if(N==0)
			cout<<"1 0"<<endl;
		else
			cout<<fibonacci(N-1)<<" "<<fibonacci(N)<<endl;

	}

	
	return 0;
}
