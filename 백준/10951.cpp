//น้มุ 10951น๘ A+B - 4
#include <iostream>
using namespace std;

int main() {
	int a,b;
	while (1) {
		cin >> a >> b;
		if (cin.eof() == true) {break;}
		cout << a + b << "\n";
	}
	return 0;
}