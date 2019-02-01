#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void print(vector <pair<int, int> > vc){
	for(int i=0;i<vc.size();i++){
		cout<<vc[i].first<<" "<<vc[i].second<<endl;
	}
	
}
int main(){
	vector <pair<int, int> > vc;
	int T;
	cin>>T;
	for(int i=0;i<T;i++){
		int n;
		cin>>n;
		vc.clear();
		for(int j=0;j<n;j++){
			int a,b;
			scanf("%d %d",&a,&b);
			vc.push_back(make_pair(a,b));
		}
		sort(vc.begin(),vc.end());
		//print(vc);
		int cnt=1;
		int max_=vc[0].second;
		for(int j=1;j<n;j++){
			if(max_>vc[j].second){
				max_=vc[j].second;
				cnt++;
			}
		}
		cout<<cnt<<endl;
	} 
	return 0;
}
