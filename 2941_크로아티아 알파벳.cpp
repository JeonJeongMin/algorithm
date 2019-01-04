#include<iostream>
#include<string>
using namespace std;
int main(){
	int cnt=0;
	string str; 
	cin>>str;
	char ch[8][4]={"c=","c-","dz=","d-","lj","nj","s=","z="};

	for(int i=0;i<str.length();i++){
	
		for(int j=0;j<8;j++){
			if(str[i]==ch[j][0]&&str[i+1]==ch[j][1]){
				if(str[i+2]=='='&&j==2){
					i=i+2;
				}
				else if(j==2){
				}
				else
					i++;
			}
			
		}
		cnt++;
	}
	cout<<cnt;

	return 0;
}
