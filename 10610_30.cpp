#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
	string n;
	cin>>n;
	int *num = new int[n.size()];
	int sum=0;
	int flag=0;
	for(int i=0;i<n.size();i++)
	{
		if(n[i]==48)
			flag=i;
		sum+=n[i];
		num[i]=n[i]-48;
		//cout<<num[i]<<endl;
	}
	if(sum%3!=0||!flag)
		cout<<"-1"<<endl;
	else{
		sort(num,num+n.size());
		for(int i=0;i<n.size();i++){
			cout<<num[n.size()-i-1];
		}
	}
	
		
	
	return 0;
}
