//���� 1008
#include <iostream>
using namespace std;
int main() {
	double a, b; //float�� 4����Ʈ, double�� 8����Ʈ
    cin >> a >> b;
	cout.precision(9);// �Ҽ��� 9�ڸ����� ���
	cout << fixed;// �Ҽ��� 9�ڸ����� ���
    cout << a / b;
    return 0;
}