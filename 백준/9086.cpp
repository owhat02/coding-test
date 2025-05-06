//백준 9086번 문자열
#include <iostream>
#include <string>

using namespace std;

int main() {
	int n;
	string str;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> str;
		int len = str.length();
		cout << str[0] << str[len - 1] << "\n";
	}
	return 0;
}