#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int N;
	cin>>N;
	int array[N];
	for(int i=0;i<N;i++){
		cin>>array[i];
	}
	int tmp1=0;
	int tmp2=0;
	int sum=0;
	int max1=0;
	
	for(int i=0;i<N;i++){
		if(array[i]>=0){
			tmp1+=array[i];
		}
		else{
			tmp2+=array[i];
		}
		if(tmp1+tmp2<0){
			sum=0;
			tmp1=0;
			tmp2=0;
		}
		else{
			sum+=array[i];
			if(max1<sum)
				max1=sum;
		}
	}
	if(max1==0){//양수가없을때 
		sort(array,array+N);
		max1=array[N-1];
	}
	cout<<max1<<endl;
	return 0;
}
