//���� 27866�� ���ڿ� ���ڿ�
#include <iostream>
#include <string>

using namespace std;

int main() {
	string str;
	cin >> str;
	int n = str.length();
	int a;
	cin >> a;
	for (int i = 0; i < a; i++) {
		if (a == i + 1) {cout << str[i] << endl;}
	}
	return 0;
}