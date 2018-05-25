#include<iostream>
using namespace std;
int main(){
	int N; 
	cin>>N;
	int num;
	for(int i=0;i<N;i++){
		cin>>num;
		char str[20];
		cin>>str;
		for(int j=0;j<20;j++){
			if(str[j]==0)
				break;
			for(int k=0;k<num;k++){
				cout<<str[j];
			}
		}
		cout<<endl;
	}
	return 0;
}
