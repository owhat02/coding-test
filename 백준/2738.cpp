//���� 2738�� ��� ����
#include <iostream>
#include <vector>
using namespace std;
int main() {
	int row, col;
	cin >> row >> col;
	vector<vector<int>> mtrx1(row, vector<int>(col));
	vector<vector<int>> mtrx2(row, vector<int>(col));
	vector<vector<int>> mtrx3(row, vector<int>(col)); //mtrx1+mtrx2
	//ù��° ��� �Է�
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cin >> mtrx1[i][j];
		}
	}
	//�ι�° ��� �Է�
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cin >> mtrx2[i][j];
		}
	}

	//��� ����
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			mtrx3[i][j] = mtrx1[i][j] + mtrx2[i][j];
		}
	}

	//��� ���
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cout << mtrx3[i][j] << " ";
		}
		cout << "\n";
	}

	return 0;
}