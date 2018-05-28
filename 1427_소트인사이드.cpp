#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	int n;
	cin>>n;
	char num[10];
	sprintf(num,"%d",n);
	int tmp=n/10;
	int cnt=1;
	while(tmp){
		tmp=tmp/10;
		cnt++;
	}
	
	sort(num,num+cnt);
	for(int i=cnt-1;i>=0;i--){
		cout<<num[i];
	}
	return 0;
}


