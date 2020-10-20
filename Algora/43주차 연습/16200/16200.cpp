#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, student[100000] = {0}, team[100000] = {0}, team_max[100000] = {0};
    cin >> n;

    for (int i = 0; i < n; i++) 
        cin >> student[i];

    sort(student, student + n, greater<int>()); // 최솟값을 구하기 위해 내림차순 정렬

    int idx = 0, team_idx = 0, team_cnt = 0;

    while (idx < n) {
        if (team_max[team_idx] == 0) { // 빈 팀일 때
            team_max[team_idx] = student[idx];
            team_cnt++;
        }

        if (team_max[team_idx] > student[idx]) { // 팀의 최대 인원 재설정
            team_max[team_idx] = student[idx];
            if (team[team_idx] >= team_max[team_idx]) { // 재설정으로 팀이 다 찬 경우
                team_idx++;
                continue;
            }
        }

        team[team_idx]++;

        if (team[team_idx] == team_max[team_idx])  // 넣고 나니 팀이 다 찬 경우
            team_idx++;

        idx++;
    }

    cout << team_cnt << '\n';
    return 0;
}