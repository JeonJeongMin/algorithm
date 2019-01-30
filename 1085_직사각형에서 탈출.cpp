#include<iostream>
#include<string>
using namespace std;
int main(){
	int x,y,w,h;
	cin>>x>>y>>w>>h;
 	int min_; 
	min_=min(x,y);
	min_=min(min_,h-y);
	min_=min(min_,w-x);
	
	cout<<min_<<endl;
	
	
	return 0;
}

