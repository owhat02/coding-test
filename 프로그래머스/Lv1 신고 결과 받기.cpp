#include <string>
#include <sstream> //istringstream ���
#include <vector>
#include <map>
#include <set> //�ߺ� �ڵ� ����
#include <utility> //pair ���

using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    vector<int> answer;
    int id_num = id_list.size();
    vector<vector<string>> m(2, vector<string>(report.size())); //2���� ���� ����
	map<string, set<string>> user_rep; //�Ű��ڿ� �Ű���� ����� �����ϴ� map
	map<string, int> count; //�Ű���� ����� �Ű���� Ƚ���� �����ϴ� map
	set<string> banned; //�Ű���� ��� �� ������ ����� �����ϴ� set

    for (int i = 0; i < report.size(); i++) {
        istringstream iss(report[i]); //istringstream�� ������ �������� ���ڿ��� split��
		iss >> m[0][i] >> m[1][i]; //m[0] = �Ű���, m[1] = �Ű���� ���
        user_rep[m[0][i]].insert(m[1][i]); //�ߺ����� �ʰ� ����
    }

    for (int i = 0; i < id_num; i++) {
        string reporter = id_list[i]; //report = �Ű���
        for (const string& target : user_rep[reporter]) { //target = �Ű���� ���
			count[target] += 1; //�Ű���� ����� �Ű���� Ƚ��
        }
    }

    //pair�� �� ���� ���� �ϳ��� ���� �ڷ���
    for (const auto& pair : count) { if (pair.second >= k) { banned.insert(pair.first); } }

    for (int i = 0; i < id_num; i++) {
        string reporter = id_list[i];
        int email = 0;
        for (const string& target : user_rep[reporter]) { if (banned.count(target)) { email += 1; } }
        answer.push_back(email);
    }

    return answer;
}