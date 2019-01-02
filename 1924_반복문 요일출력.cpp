#include<iostream>
using namespace std;

int main(){
	string date[7]={"SUN","MON","TUE","WED","THU","FRI","SAT"};
	int x,y;
	cin>>x>>y;
	int day=0;
	for(int i=1;i<x;i++){
		if(i==2){
			day+=28;
		}
		if(i==1||i==3||i==5||i==7||i==8||i==10||i==12){
			day+=31;
		}
		else if(i==4||i==6||i==9||i==11){
			day+=30;
		}
	}
	day+=y;
	cout<<date[day%7];
}
