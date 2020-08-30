#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, temp, s = 0;
    vector<int> a, b;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> temp;
        a.push_back(temp);
    }

    for(int i = 0; i < n; i++) {
        cin >> temp;
        b.push_back(temp);
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end(), greater<int>());

    for(int i = 0; i < n; i++) {
        s += a[i] * b[i];
    }

    cout << s << '\n';
    return 0;
}