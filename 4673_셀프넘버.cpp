#include<iostream>
using namespace std;
int main(){
	int a[10001]={0};
	int out;
	int tmp;
	
	for(int i=1;i<=10000;i++){
		if(a[i]==0){
			cout<<i<<endl;
		}
		out=0;
		tmp=i;
		for(int j=1;j<=4;j++){
			out+=tmp%10;
			tmp-=tmp%10;
			tmp=tmp/10;
		}
		out=out+i;
		if(out<10001)
			a[out]=1;
		
	}
	
	
	return 0;
}
