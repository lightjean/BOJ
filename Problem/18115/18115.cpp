#include <iostream>
#include <deque>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, arr[1000001];
    deque<int> dq;
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 1; i <= n; i++) {
        if (arr[n - i] == 1) {
            dq.push_back(i);
        } else if (arr[n - i] == 2) {
            int tmp = dq.back();
            dq.pop_back();
            dq.push_back(i);
            dq.push_back(tmp);
        } else {
            dq.push_front(i);
        }
    }

    while (!dq.empty()) {
        cout << dq.back() << " ";
        dq.pop_back();
    }

    return 0;
}