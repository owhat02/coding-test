//백준 15552번 빠른 A+B
#include <iostream>
using namespace std;
int main() {
	long long T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		int A, B;
		scanf("%d %d", &A, &B); // scanf를 사용하여 입력을 받음
		printf("%d\n", A + B); // printf를 사용하여 출력
	}
	return 0;
}