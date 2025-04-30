//น้มุ2420
#include <iostream>
using namespace std;

int main() {
	long long a, b,ans;
	cin >> a >> b;
	ans = a - b;
	if (ans < 0) { ans = -ans; }
	cout << ans << endl;
	return 0;
}