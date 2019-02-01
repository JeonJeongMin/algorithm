#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
	int n,m,k;
	cin>>n>>m>>k;
	
	while(k!=0){
		if(n>=m*2){
			n--;
			k--;
		}
		else{
			m--;
			k--;
		}
	}
	
	if(n>m*2)
		cout<<m<<endl;
	else
		cout<<n/2<<endl;
	
	return 0;
}
