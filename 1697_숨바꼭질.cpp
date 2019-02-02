#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
int step(int fn,int n){
	if(fn==0){
		return n-1;
	}
	else if(fn==1){
		return n+1;
	}
	else if(fn==2){
		return n*2;
	}
}
int main(){
	queue<int> q;
	int n,k;
	cin>>n>>k;
	int *maps; 
	maps = (int*)calloc(sizeof(maps),100001);
	
	maps[n]=1;
	q.push(n);
	int cnt=0;
	while(!q.empty()){
		int q_size = q.size();
		for(int j=0;j<q_size;j++){
			int tmp = q.front();
			q.pop();
			
			if(tmp==k){
				cout<<cnt<<endl;
				queue<int> empty;
				q=empty;
				break;
			}
			
			for(int i=0;i<3;i++){
				
				int a=step(i,tmp);
				
				
				if(a>=100001||a<0)
					continue;
				if(maps[a]==0){
					q.push(a);
					maps[a]=1;
				}
			}
		}
		cnt++;
	}
	 
	return 0;
}
