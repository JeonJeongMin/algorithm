#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
	string str; 
	cin>>str;
	int ch[26]={0};
	for(int i=0;i<str.size();i++){
		if(str[i]>=97)
			ch[str[i]-97]++;
		else if(str[i]>=65)
			ch[str[i]-65]++;
	}
	int max1=0;
	int max_i;
	for(int i=0;i<26;i++){
		if(max1<ch[i]){
			max1=ch[i];
			max_i=i;
		}
	}
	sort(ch,ch+26);
	
//	for(int i=0;i<26;i++){
//		cout<<ch[i]<<" ";
//	}
	if(ch[24]==ch[25]){
		cout<<"?";
	}
	else
		cout<<(char)(max_i+65);
	return 0;
}
