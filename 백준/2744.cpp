//���� 2744�� ��ҹ��� �ٲٱ�
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string str;
	cin >> str;
	int n = str.length();
	for (int i = 0; i < n; i++) {
		if (str[i] >= 'A' && str[i] <= 'Z') {str[i] += 32;} //�빮�ڴ� �ҹ��ڷ�
		else if (str[i] >= 'a' && str[i] <= 'z') {str[i] -= 32;} //�ҹ��ڴ� �빮�ڷ�
	}
	cout << str; //��ȯ�� ���ڿ� ���
	return 0;
}