#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int n;
	vector <pair<int, int> > vc;
	cin>>n;
	for(int i=0;i<n;i++){
		int a,b;
		cin>>a>>b;
		vc.push_back(make_pair(b,a));
	}
	sort(vc.begin(),vc.end());
	
	int cnt=1;
	int tmp = vc[0].first;
	for(int i=1;i<n;i++){
		if(vc[i].second>tmp){
			tmp=vc[i].first;
			cnt++;
			cout<<vc[i].second<<" "<<vc[i].first<<endl;
		}
	}
	cout<<cnt<<endl;
	
//	for(int i=0;i<vc.size();i++){
//		cout<<vc[i].first<<" "<<vc[i].second<<endl;
//	}
	
	
	return 0;
}
