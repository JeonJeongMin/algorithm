#include<iostream>
#include<string>
using namespace std;
int main(){
	string str;
	cin>>str;
	char result[100]={0};
	int cnt=1;
	for(int i=0;i<str.size();i++){
		if(str[i]==45){
			result[cnt++]=str[i+1];
		}
	}
	result[0]=str[0];
	cout<<result<<endl;
	return 0;
}


