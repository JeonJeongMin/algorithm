#include<iostream>
using namespace std;
int main(){
	char str[101];
	int alpha[26];
	cin>>str;
	for(int i=0;i<26;i++){
		alpha[i]=-1;
	}
	for(int i=0;i<101;i++){
		if(str[i]==0)
			break;
		if(alpha[str[i]-'a']==-1)
			alpha[str[i]-'a']=i;
	}
	for(int i=0;i<26;i++){
		cout<<alpha[i]<<" ";
	} 
	
	return 0;
}
