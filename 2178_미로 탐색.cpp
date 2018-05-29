#include<iostream>
#include<queue> 
using namespace std;
int dx[4]={1,0,-1,0};//¿ìÇÏÁÂ»ó 
int dy[4]={0,1,0,-1};
int map[101][101];
int visit[101][101]={0};
int cnt=1;
int result=100000;
int n,m;
queue<pair<int,int> > miro;
void bfs(int x, int y){
	visit[y][x]=1;
	miro.push(make_pair(x,y));
	pair<int,int> tmp;
	while(!miro.empty()){
		int m_sz=miro.size();
		for(int sz=0;sz<m_sz;sz++){
			tmp=miro.front();
			if(tmp.first==m-1&&tmp.second==n-1){
				result=cnt;
				return;
			}	
			miro.pop();
			for(int i=0;i<4;i++){
				int nx=tmp.first+dx[i];
				int ny=tmp.second+dy[i];
				if(!visit[ny][nx]&&map[ny][nx]&&nx>=0&&nx<m&&ny>=0&&ny<n){
					//cout<<ny<<" "<<nx<<endl;
					visit[ny][nx]=1;
					miro.push(make_pair(nx,ny));
				}
			}
		}
		cnt++;

	}
	
} 
int main(){
	cin>>n>>m;
	for(int i=0;i<n;i++){
		char tmp[m];
		cin>>tmp;
		for(int j=0;j<m;j++){
			map[i][j]=tmp[j]-48;
		}
		
	}
	
	
	bfs(0,0);
	cout<<result<<endl;
	
	return 0;
}
