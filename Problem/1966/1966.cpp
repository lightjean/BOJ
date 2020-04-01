#include <iostream>
#include <queue>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n, m, doc[100];
    queue<int> q;

    cin >> t;

    while(t--) {
        int cnt = 0;
        bool found = false;

        cin >> n >> m;

        for(int i = 0; i < n; i++) { // 큐에 인덱스를 넣음
            cin >> doc[i];
            q.push(i);
        }

        while(!found) {
            int priority = 0;

            for(int i = 0; i < n; i++) { // 현재 남은 문서의 가장 높은 중요도를 찾음
                if(priority < doc[i]) {
                    priority = doc[i];
                }
            }

            while(!found) {
                if(doc[q.front()] == priority) { // 가장 높은 중요도 문서를 찾았을 때
                    if(q.front() == m) {
                        found = true;
                        q.pop();
                        cnt++;
                    } else {
                        doc[q.front()] = 0;
                        q.pop();
                        cnt++;
                        break;
                    }
                } else { // 중요도 낮은 문서는 뒤로 보내기
                    q.push(q.front());
                    q.pop();
                }
            }

        }

        if(!q.empty()) { // 테스트케이스가 여러개일 때 꼭 큐 내부 비워주기
            while(!q.empty()) {
                q.pop();
            }
        }

        cout << cnt << '\n';
    }

    return 0;
}