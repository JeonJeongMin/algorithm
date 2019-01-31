#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n;
	cin>>n;
	int *money= new int[n];
	for(int i=0;i<n;i++)
		cin>>money[i];
	
	sort(money,money+n);
	int sum=0;
	
	for(int i=0;i<n;i++)
		for(int j=0;j<=i;j++)
			sum+=money[j];
		
	cout<<sum<<endl;
	
	
	return 0;
}
