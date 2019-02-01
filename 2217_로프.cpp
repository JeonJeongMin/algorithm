#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int n;
	cin>>n; 
	int *kg = new int[n];
	for(int i=0;i<n;i++){
		cin>>kg[i];
	}
	sort(kg,kg+n);
	int max_=0;
	for(int i=0;i<n;i++){
		if(max_<kg[i]*(n-i))
			max_=kg[i]*(n-i);
	}
	cout<<max_<<endl;
	return 0;
}
