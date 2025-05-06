//프로그래머스 <행렬의 곱셈 LV2>
#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    int row1 = arr1.size(); //row = 행
    int col1 = arr1[0].size(); //col = 열
    int row2 = arr2.size(); //row = 행
    int col2 = arr2[0].size(); //col = 열
    vector<vector<int>> answer(row1, vector<int>(col2, 0));
    //col1=row2
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            for (int k = 0; k < col1; k++) {
                answer[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    return answer;
}