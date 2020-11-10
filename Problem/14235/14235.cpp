#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, a;
    cin >> n;

    priority_queue<int, vector<int>> pq;

    for (int i = 0; i < n; i++) {
        cin >> a;
        if (a == 0) {
            if (!pq.empty()) {
                cout << pq.top() << '\n';
                pq.pop();
            }
            else {
                cout << -1 << '\n';
            }
        }
        else {
            for (int j = 0; j < a; j++) {
                int value;
                cin >> value;
                pq.push(value);
            }
        }
    }
    return 0;
}