#include<iostream>
using namespace std;

int *t = new int[16];
int *p = new int[16];
int n;
int max_ = 0;
void money(int pos, int sum) {
	//cout << "pos:" << pos << "sums;" << sum << endl;
	if (sum > max_)
		max_ = sum;

	if (pos > n)
		return;

	for (int i = pos; i <= n; i++) {
		if (i + t[i] <= n + 1) {
			money(i + t[i], sum+p[i]);

		}
	}
}
int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> t[i] >> p[i];
	}
	money(1, 0);
	cout << max_ << endl;
	return 0;
}

