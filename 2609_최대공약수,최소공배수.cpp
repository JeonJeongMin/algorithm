#include<iostream>
using namespace std;
void ch(int* a, int* b){
	int tmp;
	if(*a<*b){
		tmp=*a;
		*a=*b;
		*b=tmp;
	}
}
int main(){
	int a,b;
	cin>>a>>b;
	int tmp1=a,tmp2=b;
	do{
		ch(&tmp1,&tmp2);
		//cout<<a<<" "<<b<<endl; 
		tmp1=tmp1%tmp2;
	}while(tmp1&&tmp2);	
	cout<<tmp2<<endl;
	cout<<a/tmp2*b<<endl;
	
	return 0;
}
