#include<iostream>
using namespace std;

int main(void) {
  char ch, bf=0;
  int cnt=0;
  while((ch = getchar()) != '\n' && ch != EOF) {
    if (ch == ' ') {
      bf = 0;
    } else {
      if (!bf) cnt++;
      bf = 1;
    }
  }
  cout<<cnt<<endl;
  return 0;
}
