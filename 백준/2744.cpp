//백준 2744번 대소문자 바꾸기
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string str;
	cin >> str;
	int n = str.length();
	for (int i = 0; i < n; i++) {
		if (str[i] >= 'A' && str[i] <= 'Z') {str[i] += 32;} //대문자는 소문자로
		else if (str[i] >= 'a' && str[i] <= 'z') {str[i] -= 32;} //소문자는 대문자로
	}
	cout << str; //변환된 문자열 출력
	return 0;
}