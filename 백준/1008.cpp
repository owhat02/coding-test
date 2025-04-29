//백준 1008
#include <iostream>
using namespace std;
int main() {
	double a, b; //float는 4바이트, double은 8바이트
    cin >> a >> b;
	cout.precision(9);// 소수점 9자리까지 출력
	cout << fixed;// 소수점 9자리까지 출력
    cout << a / b;
    return 0;
}