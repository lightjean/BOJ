#include <iostream>
#include <queue>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, k;
    queue<int> q;

    cin >> n >> k;

    for(int i = 1; i <= n; i++) {
        q.push(i);
    }

    cout << "<";

    for(int i = 0; i < n - 1; i++) {
        for(int i = 0; i < k - 1; i++) {
            q.push(q.front());
            q.pop();
        }

        cout << q.front() << ", ";
        q.pop();
    }

    cout << q.front() << ">" << '\n';
    return 0;
}