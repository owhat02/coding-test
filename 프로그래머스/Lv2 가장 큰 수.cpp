//���α׷��ӽ� <���� ū �� LV2>
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

string solution(vector<int> numbers) {
    string answer = "";
    vector<string> num;

    for (int i = 0; i < numbers.size(); i++) {
        num.push_back(to_string(numbers[i])); //�������� ���������� ��ȯ
    }

    sort(num.begin(), num.end(), [](string a, string b) {return a + b > b + a; });
    //�� ���ڿ��� �������� ���������� �� ū ����� �����Ѵ�.

    for (int i = 0; i < numbers.size(); i++) {
        answer += num[i];
    }

    return answer;
}

int main() {
    vector<int> numbers1 = { 6, 10, 2 };
    vector<int> numbers2 = { 3, 30, 34, 5, 9 };

    string answer1 = solution(numbers1);
    string answer2 = solution(numbers2);

    cout << answer1 << "\n" << answer2 << endl;
    return 0;
}