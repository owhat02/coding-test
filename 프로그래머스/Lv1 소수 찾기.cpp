#include <string>
#include <vector>

using namespace std;

//에라토스테네스의 체
int solution(int n) {
    int answer = 0;
    vector<bool> num(n + 1, true); //0부터 n까지 true
	num[0] = num[1] = false; //0과 1은 소수가 아님

    for (int i = 2; i * i <= n; i++) {
        if (num[i]) {
            for (int j = i * i; j <= n; j += i) { num[j] = false; }
        }
    }

    for (int i = 2; i <= n; ++i) { if (num[i]) { answer++; } }
    return answer;
}


/* 효율성 0점 맞은 코드, 돌아가긴 함
int solution(int n) {
    int answer = 1; //2는 소수 이므로 기본적으로 넣기
    for (int i=3; i<=n; i++) {
        for (int j=2; j<i; j++) {
            if (i%j ==0) break;
            if (j == i-1) answer++;
        }
    }
    return answer;
}
*/