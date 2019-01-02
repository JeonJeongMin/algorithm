#include<iostream>
#include<string>
#include<stdio.h> 
#include<stdlib.h>
using namespace std;
int main(){
	int cnt=0;
	int num,new_num;
	char str_num[2];
	cin>>str_num;
	num=atoi(str_num);
	int start = num;
	new_num=num;
	do{	
		num=new_num;
		if(num<10){
			
		}
		
		else{
			new_num=num/10+num%10;
		}
		new_num = 10*(num%10)+new_num%10;
		cnt++;
		
	}while(start!=new_num);
	cout<<cnt;
	return 0;
}
