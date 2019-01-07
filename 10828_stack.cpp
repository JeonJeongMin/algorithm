#include<iostream>
#include<stack>
using namespace std;
int main(){
	
	int T;
	string order;
	cin>>T;
	stack <int> s;
	for(int i=0;i<T;i++){
		cin>>order;
		int tmp;
		if(order=="push"){
			cin>>tmp;
			s.push(tmp);
		}
		else if(order=="pop"){
			if(s.empty()){
				cout<<"-1"<<endl;
			}
			else{
				cout<<s.top()<<endl;
				s.pop();
			}
		}
		else if(order=="size"){
			cout<<s.size()<<endl;
		}
		else if(order=="empty"){
			if(s.empty()){
				cout<<"1"<<endl;
			}
			else{
				cout<<"0"<<endl;
			}
		}
		else if(order=="top"){
			if(s.empty()){
				cout<<"-1"<<endl;
			}
			else{
				cout<<s.top()<<endl;
			}
		}
		
	}
	
	
	return 0;
}


