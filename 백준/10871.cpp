//백준 10871번 X보다 작은 수
#include <iostream>
using namespace std;
int main() {
	int n, x, a;
	cin >> n >> x;
	for (int i = 0; i < n; i++) {
		cin >> a;
		if (a < x) { cout << a << " "; }
	}
	return 0;
}