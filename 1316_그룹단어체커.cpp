#include<iostream>
#include<string.h>
using namespace std;

int main(){
	int N;
	cin>>N;
	string str;
	int ch[26]={0};
	int cnt=0;
	for(int i=0;i<N;i++){
		cin>>str;
		int j;
		for(j=0;j<str.size();j++){
			if(ch[str[j]-97]>0&&str[j]!=str[j-1]){
				break;
			}
			ch[str[j]-97]++;
		}
		if(j==str.size()){
			cnt++;
		}
		for(int m=0;m<26;m++)
			ch[m]=0;
	}
	cout<<cnt; 
	
	return 0;
}
