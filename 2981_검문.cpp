#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;

vector<int> vc;
void print(){
	for(int i=0;i<vc.size();i++){
		cout<<vc[i]<<" ";
	}
}
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
int gcd(int a, int b){
	int tmp;
	if(a<b){
		tmp=a;
		a=b;
		b=tmp;
	}
	while(b){
		a=a%b;
		tmp=a;
		a=b;
		b=tmp;
	}
	return a;
}
int main(){
	int n;
//	int min_i;
	cin>>n;
	int arr[n];
//	int minimum=1000000001;
	
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
	
	
	
	
	
	
	
	
	
	
	
	//2
//	sort(arr,arr+n);
//	for(int j=n;j>2;j--){
//		for(int i=2;i<j;i++){
//			arr[i-2]=gcd(arr[i-1]-arr[i-2],arr[i]-arr[i-1]);
//		}
//		
//	}
//	divisor(arr[0]);
//	sort(vc.begin(),vc.end());
//	print();
//2
	
//	for(int i=0;i<n;i++){
//		cin>>arr[i];
//		if(minimum>arr[i]){
//			minimum=arr[i];
//			min_i=i;
//			}
//	}
//	int min2=1000000001;
//	for(int i=0;i<n;i++){
//		if(i==min_i)
//			continue;
//		if(min2>arr[i])
//			min2=arr[i];
//	}
	
//	int i,j;
//	for(j=min2-1;j>=2;j--){
//		int tmp=arr[0]%j;
//		for(i=1;i<n;i++){
//			if(tmp!=arr[i]%j)
//				break;
//			tmp=arr[i]%j;
//		}
//		
//		if(i==n){
//			print(j);
//			break;
//		}
//	}
	
	return 0;
}
