//���� 2754�� �������
#include <iostream>
#include <string>

using namespace std;

int main() {
	string str;
	double score = 0.0;
	cin >> str;
	int n = str.length();
	for (int i = 0; i < n; i++) {
		if (str[i] == 'A') { score += 4; } //A�� 4��
		else if (str[i] == 'B') { score += 3; } // B�� 3��
		else if (str[i] == 'C') { score += 2; } // C�� 2��
		else if (str[i] == 'D') { score += 1; } // D�� 1��
		else if (str[i] == '+') { score += 0.3; }
		else if (str[i] == '-') { score -= 0.3; }
	}
	printf("%.1f", score); // �Ҽ��� 1�ڸ����� ���
	return 0;
}