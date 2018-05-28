#include<iostream>
#include<algorithm> 
using namespace std;
int main(){
	
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	int n,k;
	cin>>n>>k;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr,arr+n);
	cout<<arr[k-1];
	
	
	
	return 0;
}

