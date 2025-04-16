#include <string>
#include <sstream> //istringstream 사용
#include <vector>
#include <map>
#include <set> //중복 자동 제거
#include <utility> //pair 사용

using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    vector<int> answer;
    int id_num = id_list.size();
    vector<vector<string>> m(2, vector<string>(report.size())); //2차원 벡터 생성
	map<string, set<string>> user_rep; //신고자와 신고당한 사람을 저장하는 map
	map<string, int> count; //신고당한 사람과 신고당한 횟수를 저장하는 map
	set<string> banned; //신고당한 사람 중 정지된 사람을 저장하는 set

    for (int i = 0; i < report.size(); i++) {
        istringstream iss(report[i]); //istringstream은 공백을 기준으로 문자열을 split함
		iss >> m[0][i] >> m[1][i]; //m[0] = 신고자, m[1] = 신고당한 사람
        user_rep[m[0][i]].insert(m[1][i]); //중복되지 않게 저장
    }

    for (int i = 0; i < id_num; i++) {
        string reporter = id_list[i]; //report = 신고자
        for (const string& target : user_rep[reporter]) { //target = 신고당한 사람
			count[target] += 1; //신고당한 사람의 신고당한 횟수
        }
    }

    //pair은 두 개의 값을 하나로 묶은 자료형
    for (const auto& pair : count) { if (pair.second >= k) { banned.insert(pair.first); } }

    for (int i = 0; i < id_num; i++) {
        string reporter = id_list[i];
        int email = 0;
        for (const string& target : user_rep[reporter]) { if (banned.count(target)) { email += 1; } }
        answer.push_back(email);
    }

    return answer;
}