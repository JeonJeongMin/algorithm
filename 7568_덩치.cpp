#include<iostream>
using namespace std;
int main(){
	int N;
	cin>>N;
	int st[N][2];
	int grade[N]={0};
	for(int i=0;i<N;i++)
		cin>>st[i][0]>>st[i][1];
		
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			if(st[i][0]<st[j][0]&&st[i][1]<st[j][1]){
				grade[i]++;		
			}
		}
	}
	
	for(int i=0;i<N;i++){
		cout<<grade[i]+1<<" ";
	}
	
	return 0;
}
