//���� 10807�� ���� ����
#include <iostream>
#include <vector>
using namespace std;
int main() {
	int a;
	cin >> a;
	vector <int> v(a);
	for (int i = 0; i < a; i++) {
		int n;
		cin >> n;
		v[i] = n;
	}

	int check_num = 0;
	int count = 0;
	cin >> check_num;

	for (int i = 0; i < a; i++) {
		if (v[i] == check_num) {count++;}
	}

	cout << count << endl;
	return 0;
}