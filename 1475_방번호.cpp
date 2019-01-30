#include<iostream>
#include<string>
using namespace std;
int main(){
	int n[10]={0};
	string num;
	cin>>num;
	for(int i=0;i<num.size();i++){
		n[num[i]-48]++;
	}
	
	int max_=0;
	int tmp = (n[6]+n[9]);
	if(tmp%2==0){
		n[6]=n[9]=tmp/2;
	}
	else{
		n[6]=tmp/2+1;
		n[9]=tmp/2;
	}
	for(int i=0;i<10;i++){
		if(max_<n[i])
			max_=n[i];
		//cout<<n[i]<<" ";
	}
	cout<<max_<<endl;
	
	
	return 0;
}

