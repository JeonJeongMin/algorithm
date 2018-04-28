#include<iostream>
#include<vector>
using namespace std;
int map[50][50];
vector<pair<int,int> > home;
vector<pair<int,int> > chicken;
int visit[13];
int n,m;
int tmp;
int mini=10000;
int sum;
int result=10000;
int abs(int a){
	if(a<0)
		return -a;
	else return a;
}
void dfs(int v, int depth){
	visit[v]=1;
	if(depth==m){
		sum=0;
		for(int j=0;j<home.size();j++){	
			for(int k=0;k<13;k++){
				if(visit[k]){
					tmp=abs(home[j].first-chicken[k].first)+abs(home[j].second-chicken[k].second);
				if(mini>tmp)
					mini=tmp;
				}	
			}
			sum+=mini;
			mini=1000;
		}
		if(result>sum)
			result=sum;
	}
	else{
		for(int i=v;i<chicken.size();i++){
			if(visit[i]==0){
				dfs(i,depth+1);
			}
		}
	}
	visit[v]=0;
}
int main(){
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>map[i][j];
			if(map[i][j]==1)
				home.push_back(make_pair(i,j));
			if(map[i][j]==2)
				chicken.push_back(make_pair(i,j));
		}
	}
	for(int i=0;i<chicken.size()-m+1;i++){
		dfs(i,1);
	}
	
	cout<<result;
	return 0;
}
