#include<iostream>
#define pi 3.14159265358979323846
using namespace std;
int main(){
	float r;
	cin>>r;
	
	cout.setf(ios::fixed);
	cout.precision(6);
	cout<<pi*r*r<<endl;
	cout.precision(6);
	cout<<2*r*r<<endl;
	
	return 0;
}
