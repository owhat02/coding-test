//���� 15552�� ���� A+B
#include <iostream>
using namespace std;
int main() {
	long long T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		int A, B;
		scanf("%d %d", &A, &B); // scanf�� ����Ͽ� �Է��� ����
		printf("%d\n", A + B); // printf�� ����Ͽ� ���
	}
	return 0;
}