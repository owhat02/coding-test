//���α׷��ӽ� <���μ��� LV2>
#include <string>
#include <vector>
#include <algorithm> //max_element ���
#include <iostream>

using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    int qsize = priorities.size();
    int index = 0;
    while (true) {
        int max_it = *max_element(priorities.begin(), priorities.end()); //priorities���� max�� ã��
        if (priorities[index] == max_it) {
            answer++;
            priorities[index] = -1;
            if ((index == location) && (priorities[index] == -1))
                break;
        }
        if (index == qsize - 1)
            index = 0;
        else
            index++;
        //cout << answer<< " " << index << " "<<priorities[index] << " " << max_it << endl;
    }
    return answer;
}