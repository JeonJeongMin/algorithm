#include<iostream>
using namespace std;
int main(){
	int N;
	cin>>N;
	int result=1;
	for(int i=0;i<N;i++){
		int a,b;
		cin>>a>>b;
		if(a==result)
			result=b;
		else if(b==result)
			result=a;
	}
	cout<<result; 
	
	return 0;
}


