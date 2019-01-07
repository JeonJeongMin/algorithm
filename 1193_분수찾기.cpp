#include<iostream>
using namespace std;
int abs(int a){
	if(a<0)
		a=-a;
	return a;
	
}

int main(){
	
	int n;
	cin>>n;
	int tmp=0;
	int i;
	for(i=1;n>tmp;i++){
		tmp+=i;
	}
	i--;
	int parent,child;
	int step=abs(tmp-n);
	
	if(i%2==1){//¿Ş
		parent=i;
		child=1;
		
		parent-=step;
		child+=step;
	}
	else{//¿À¸¥
		parent=1;
		child=i;
		
		parent+=step;
		child-=step;
	}
	
	cout<<child<<"/"<<parent<<endl;
	
	
	
	return 0;
}


