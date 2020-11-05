#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;

    priority_queue<int, vector<int>, greater<int>> pq;

    while (n--) {
        int x;
        cin >> x;

        if (x == 0) {
            if (!pq.empty()) {
                cout << pq.top() << '\n';
                pq.pop();
            } else {
                cout << 0 << '\n';
            }
        } else {
            pq.push(x);
        }
    }
    return 0;
}