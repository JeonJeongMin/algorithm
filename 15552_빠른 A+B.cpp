#include<iostream>
using namespace std;
int main(){
	
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	int n;
	cin>>n;
	int tmp1,tmp2;
	for(int i=0;i<n;i++){
		cin>>tmp1>>tmp2;
		cout<<tmp1+tmp2<<"\n";
	}
	
	return 0;
}


