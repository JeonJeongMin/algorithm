#include<iostream>
#include<string>
using namespace std;
int main(){
	int T;
	cin>>T;
	string OX;
	int sum=0;
	int score=1;
	char prevOX='X'; 
	for(int tc=0;tc<T;tc++){
		cin>>OX;
		sum=0;
		score=1;
		prevOX='X';
		for(int i=0;i<OX.length();i++){
			if(prevOX=='O'&&OX[i]=='O'){//������ ������ O�ΰ�� 
				score+=1;
				sum+=score;
			}
			else if(OX[i]=='O'){//������ X, ���縸 O�ΰ�� 
				score=1;
				sum+=score;
			}
			else{//���� X�� ��� 
				score=1;
			}
			prevOX=OX[i];
		}
		
		cout<<sum<<endl;
	}
	
	return 0;
}
