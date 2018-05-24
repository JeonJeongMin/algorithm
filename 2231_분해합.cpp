#include<iostream>
using namespace std;
int main(){
	int N;
	cin>>N;
	char str[8]={0};
	int sum=0;
	int result;
	int i;
	for(i=N-70;i<N;i++){
		sprintf(str,"%d",i);
		
		sum=0;
		for(int j=0;j<7;j++){
			if(str[j]>0)
				sum+=str[j]-48;
		
		}
		
		result=i+sum;
		if(result==N)
			break;
	}
	if(i==N)
		cout<<"0";
	else
		cout<<i;
	
	
	
	return 0;
}
