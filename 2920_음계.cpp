#include<iostream>
#include<string>
using namespace std;
int main(){
	int music[8];
	int arr=0;
	int prev_arr=0;
	for(int i=0;i<8;i++){
		cin>>music[i];
	}
	int i;
	for(i=1;i<8;i++){
		
		if(music[i]>music[i-1])
			arr=1;
		else
			arr=0;
		
		if(arr!=prev_arr&&i>1){
			cout<<"mixed"<<endl;
			break;
		}
		
		prev_arr=arr;		
	}
	if(i==8){
		if(arr==1)
			cout<<"ascending"<<endl;
		else
			cout<<"descending"<<endl;
	}
	
	
	return 0;
}
