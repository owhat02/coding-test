//백준 2754번 학점계산
#include <iostream>
#include <string>

using namespace std;

int main() {
	string str;
	double score = 0.0;
	cin >> str;
	int n = str.length();
	for (int i = 0; i < n; i++) {
		if (str[i] == 'A') { score += 4; } //A는 4점
		else if (str[i] == 'B') { score += 3; } // B는 3점
		else if (str[i] == 'C') { score += 2; } // C는 2점
		else if (str[i] == 'D') { score += 1; } // D는 1점
		else if (str[i] == '+') { score += 0.3; }
		else if (str[i] == '-') { score -= 0.3; }
	}
	printf("%.1f", score); // 소수점 1자리까지 출력
	return 0;
}