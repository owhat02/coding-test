//백준 10872 팩토리얼
#include <iostream>
using namespace std;

int main() {
	int a,sum;
	cin >> a;
	sum = 1; //0! = 1이기 때문
	for (int i = 0; i < a; i++) {
		sum = sum * (i+1);
	}
	cout << sum;
	return 0;
}