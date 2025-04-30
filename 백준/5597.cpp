//백준 5597번 과제 안 내신 분..?
#include <iostream>
#include <vector>
using namespace std;
int main() {
	vector <int> v(30); //사이즈가 30인 벡터 생성
	for (int i = 0; i < 30; i++) {
		v[i] = i + 1;
	}

	for (int i = 0; i < 28; i++) {
		int a;
		cin >> a;
		for (int j = 0; j < 30; j++) {
			if (v[j] == a) {
				v[j] = 0;
			}
		}
	}

	for (int i = 0; i < 30; i++) {
		if (v[i] != 0) {
			cout << v[i] << "\n";
		}
	}
	return 0;
}