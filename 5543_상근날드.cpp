#include<iostream>
using namespace std;
int main(){
	int n[3];
	int p[2];
	int max1=2000;
	int max2=2000;
	for(int i=0;i<3;i++){
		cin>>n[i];
		if(max1>n[i])
			max1=n[i];
	}	
	for(int i=0;i<2;i++){
		cin>>p[i];
		if(max2>p[i])
			max2=p[i];
	}	
	cout<<max1+max2-50<<endl;
	return 0;
}
