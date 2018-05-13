#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int sum=0;
	int tall[9]; 
	int result[7];
	int i_,j_;
	for(int i=0;i<9;i++)
		cin>>tall[i];
	for(int i=0;i<8;i++){
		for(int j=i+1;j<9;j++){
			sum=0;
			for(int k=0;k<9;k++){
				if(k!=i&&k!=j){
					sum+=tall[k];
				}
			}
			if(sum==100){
				i_=i;
				j_=j;
			}
					
		}
	}
	int k=0;
	for(int i=0;i<9;i++){
		if(i!=i_&&i!=j_){
			result[k]=tall[i];
			k++;
			}
	}
	
	//sort(result,result+7);  algorithm 라이브러리를 사용 
	int tmp;
	for(int i=0;i<7;i++){	//버블정렬 
		for(int j=0;j<6-i;j++){
			if(result[j]>result[j+1]){
				tmp=result[j];
				result[j]=result[j+1];
				result[j+1]=tmp;
			}
		}
	}
	
	for(int i=0;i<7;i++)
		cout<<result[i]<<endl;
	
	return 0;
}
