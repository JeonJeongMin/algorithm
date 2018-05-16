#include<iostream>
#include<string>
using namespace std;
int main(){
	int N,tmp;
	int cnt=-1;
	int ten=9;
	cin>>N;
	int num[10]={0};
	long long i;
	for(i=0;i<10000000000;i++){
		tmp=i;
		ten=9;
		while((tmp/10)!=0){
			num[ten]=tmp%10;
			tmp=tmp/10;
			ten--;
		}
		num[ten]=tmp;
		
//		for(int m=0;m<10;m++){
//			cout<<num[m];
//		}
//		cout<<endl;
	
		int j;
		for(j=ten;j<9;j++){
			if(num[j]==num[j+1]){
				int sum=1;
				for(int p=0;p<9-j;p++){
					sum*=10;
				}
				i+=sum/10*(10-num[j+1])-1;
				//cout<<sum/10*(10-num[j+1])<<endl;
				break;
			}
			if(num[j]<num[j+1]){
				int sum=1;
				for(int p=0;p<9-ten;p++){
					sum*=10;
				}
				i+=sum-1;
				break;
			}
			
		}
		if(j==9){
			cnt++;
			//cout<<cnt<<endl;
		}
		if(cnt==N)
			break;
	}
	if(N==0)
		cout<<"0"<<endl;
	else if(N==1022)
		cout<<"9876543210"<<endl;
	else if(N>1022)
		cout<<"-1"<<endl;
	else 
		cout<<i<<endl;
	return 0;
}
