//프로그래머스 <가장 큰 수 LV2>
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

string solution(vector<int> numbers) {
    string answer = "";
    vector<string> num;

    for (int i = 0; i < numbers.size(); i++) {
        num.push_back(to_string(numbers[i])); //정수형을 문자형으로 전환
    }

    sort(num.begin(), num.end(), [](string a, string b) {return a + b > b + a; });
    //두 문자열을 합했을때 사전순으로 더 큰 수대로 정렬한다.

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