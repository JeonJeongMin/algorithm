#include<iostream>
using namespace std;
int n;
int main(){
	cin>>n;
	int cnt=0;
	if(n<100)
		cout<<n<<endl;
	else{
		int tmp1,tmp2;
		char str[3];
		cnt=99;
		for(int i=100;i<=n;i++){
			sprintf(str,"%d",i);
			tmp1=str[0]-str[1];
			tmp2=str[1]-str[2];
			if(tmp1==tmp2)
				cnt++;
			}
		cout<<cnt<<endl;
	}
	return 0;
}

