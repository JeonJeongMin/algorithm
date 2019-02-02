#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int T;
	cin>>T;
	for(int tc=0;tc<T;tc++){
		int len,n;
		cin>>len>>n;
		int *map = new int[n];
		for(int i=0;i<n;i++){
			cin>>map[i];
			if(map[i]>len/2)
				map[i]=len-map[i];
		}
		sort(map,map+n);
		cout<<map[n-1]<<" "<<len-map[0]<<endl;
	}
	return 0;
}
