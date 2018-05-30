#include<iostream>
using namespace std;
int cnt=0;
void check(int num){
	if(num==1)
		return; 
	for(int i=2;i<num;i++){
		if(num%i==0)
			return;
	}
	cnt++;
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
		check(arr[i]);
	}
	cout<<cnt<<endl;
	
	return 0;
}
