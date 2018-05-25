#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
	char A[4],B[4];
	cin>>A>>B;
	char A2[4],B2[4];
	for(int i=0;i<3;i++){
		A2[i]=A[2-i];
		B2[i]=B[2-i];
	}
	int a = atoi(A2);
	int b = atoi(B2);
	cout<<(a<b?b:a);
	
	
	
	return 0;
}
