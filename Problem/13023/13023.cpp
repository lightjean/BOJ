#include <iostream>
#include <vector>
using namespace std;

bool arr[2000][2000]; // 인접 행렬
vector<int> v1[2000]; // 인접 리스트
vector<pair<int, int>> v2; // 간선 리스트

int main() {
    int n, m;
    cin >> n >> m;

    for(int i = 0; i < m; i++) {
        int start, end;
        cin >> start >> end;
        // 인접 행렬에 데이터 삽입
        arr[start][end] = true;
        arr[end][start] = true;
        //인접 리스트에 데이터 삽입
        v1[start].push_back(end);
        v1[end].push_back(start);
        // 간선 리스트에 데이터 삽입
        v2.push_back({start, end});
        v2.push_back({end, start});
    }

    for(int i = 0; i < m * 2; i++) {
        for(int j = 0; j < m * 2; j++) {
            // 간선 리스트로 A -> B 관계 표현
            int A = v2[i].first;
            int B = v2[i].second;
            // 간선 리스트로 C -> D 관계 표현
            int C = v2[j].first;
            int D = v2[j].second;
            // A, B, C, D중 같은 사람이 있으면 안됨
            if(A == B || A == C || A == D || B == C || B == D || C == D) {
                continue;
            }
            // 인접 행렬로 B -> C 관계가 성립하는지 검사
            if(!arr[B][C]) {
                continue;
            }
            // 인접 리스트로 D -> E 관계
            for(int E : v1[D]) { // iterator, D와 연결된 정점들을 위와 같이 중복 검사
                if(A == E || B == E || C == E || D == E) {
                    continue;
                }
                // ABCDE 관계를 찾음
                cout << 1 << '\n';
                return 0;
            }
        }
    }
    //ABCDE 관계를 찾지 못함
    cout << 0 << '\n';
    return 0;
}