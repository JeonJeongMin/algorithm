#include<iostream>
using namespace std;

int out(int num){
	if(num==0)
		return 'E';
	if(num==1)
		return 'A';
	if(num==2)
		return 'B';
	if(num==3)
		return 'C';
	if(num==4)
		return 'D';
	 
}

int main(){
	for(int i=0;i<3;i++){
		int a[4]={0};
		int cnt=0;
		for(int j=0;j<4;j++){
			cin>>a[j];
			if(a[j]==0){
				cnt++;
			}
		}
		printf("%c\n",out(cnt));
		//cout<<out(cnt)<<endl;
		
	}



	return 0;
}
