#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	
	int tmp=1;
	int cnt=1;
	
	while(n>tmp){
		tmp+=cnt*6;
		cnt++;
		
	}
	cout<<cnt;
	
	
	return 0;
}



//1 7 19 37 61
// 6 12 18 24
