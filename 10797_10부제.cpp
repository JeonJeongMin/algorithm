#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int cnt=0;
	int tmp;
	for(int i=0;i<5;i++){
		cin>>tmp; 
		if(n==tmp)
			cnt++;
	}
	cout<<cnt<<endl;
	return 0;
}
