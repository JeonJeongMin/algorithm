#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;

vector<int> vc;
void divisor(int n){
	int i;
	for(i=2;i<sqrt(n);i++){
		if(n%i==0){
			vc.push_back(i);
			vc.push_back(n/i);
		}
	}
	if(i*i==n){
		vc.push_back(i);
	}
	vc.push_back(n);
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int i,j;
	sort(arr,arr+n);
	divisor(arr[n-1]-arr[0]);
	sort(vc.begin(),vc.end());
	for(i=0;i<vc.size();i++){
		int tmp1=arr[0]%vc[i];
		for(j=1;j<n;j++){
			int tmp2=arr[j]%vc[i];
			if(tmp1!=tmp2)
				break;
			
		}
		if(j==n)
			cout<<vc[i]<<" ";
	}
	
	
	
	return 0;
}
