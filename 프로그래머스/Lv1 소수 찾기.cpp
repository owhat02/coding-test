#include <string>
#include <vector>

using namespace std;

//�����佺�׳׽��� ü
int solution(int n) {
    int answer = 0;
    vector<bool> num(n + 1, true); //0���� n���� true
	num[0] = num[1] = false; //0�� 1�� �Ҽ��� �ƴ�

    for (int i = 2; i * i <= n; i++) {
        if (num[i]) {
            for (int j = i * i; j <= n; j += i) { num[j] = false; }
        }
    }

    for (int i = 2; i <= n; ++i) { if (num[i]) { answer++; } }
    return answer;
}


/* ȿ���� 0�� ���� �ڵ�, ���ư��� ��
int solution(int n) {
    int answer = 1; //2�� �Ҽ� �̹Ƿ� �⺻������ �ֱ�
    for (int i=3; i<=n; i++) {
        for (int j=2; j<i; j++) {
            if (i%j ==0) break;
            if (j == i-1) answer++;
        }
    }
    return answer;
}
*/