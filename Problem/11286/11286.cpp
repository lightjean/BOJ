#include <iostream>
#include <queue>
#include <vector>
#include <cmath>
using namespace std;

struct cmp {
    bool operator()(int x, int y) {
        if (abs(x) == abs(y)) {
            return x > y;
        } else {
            return abs(x) > abs(y);
        }
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    priority_queue<int, vector<int>, cmp> pq;

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