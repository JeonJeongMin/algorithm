#include<iostream>
using namespace std;
int main(){

	int A,B,C,result;
	cin>>A>>B>>C;
	
	result=A*B*C;
	char num[20];
	int count[10]={0};
	//itoa(result,num,10);
	sprintf(num, "%d", result);
	int i;
	for(i=0;i<20;i++){
		if(num[i]=='\0')
			break;
		count[num[i]-48]++;
	}
	for(int i=0;i<10;i++){
		cout<<count[i]<<endl;
	}
	return 0;
}
 
