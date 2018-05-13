#include<iostream>
#include<vector>
#define MAX_SIZE 8
using namespace std;
int map[MAX_SIZE][MAX_SIZE];
int copy_map[MAX_SIZE][MAX_SIZE];
int r,c,cnt;
//vector<pair<int,int> > virus;
vector<pair<int,int> > empty;
int dx[4]={-1,0,1,0};
int dy[4]={0,-1,0,1};
int max1=0;

int calc(){
	cnt=0;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			if(copy_map[i][j]==0)
				cnt++;
		}
	}
	return cnt;
}

void dfs(int x,int y){
	for(int i=0;i<4;i++){
		int newX=x+dx[i];
		int newY=y+dy[i];
		
		if(newX>=0 && newX<r && newY>=0&& newY<c){
			if(copy_map[newX][newY]==0){
				copy_map[newX][newY]=2;
				dfs(newX,newY);
			}
		}
	}
}
int main(){
	cin>>r>>c;
	map[r][c];
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin>>map[i][j];
			if(map[i][j]==0)
				empty.push_back(make_pair(i,j));
		}
	}
	for(int i=0;i<empty.size()-2;i++){
		for(int j=i+1;j<empty.size()-1;j++){
			for(int k=j+1;k<empty.size();k++){
				
				for(int m=0;m<MAX_SIZE;m++){
					for(int n=0;n<MAX_SIZE;n++){
						copy_map[m][n]=map[m][n];
					}
				}
				pair<int,int> one = empty[i];
				pair<int,int> two = empty[j];
				pair<int,int> three = empty[k];

				copy_map[one.first][one.second]=1;
				copy_map[two.first][two.second]=1;
				copy_map[three.first][three.second]=1;
				
				for(int m=0;m<r;m++){
					for(int n=0;n<c;n++){
						if(copy_map[m][n]==2)
							dfs(m,n);
					}
				}
				
				int tmp=calc();
				if(max1<tmp)
					max1=tmp;
			}
		}
	}
	cout<<max1<<endl;
	return 0;
}
