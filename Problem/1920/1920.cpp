#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m;
    vector<int> v;

    cin >> n;

    for(int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }

    sort(v.begin(), v.end());

    cin >> m;

    for(int i = 0; i < m; i++) {
        int find_number;
        cin >> find_number;
        if(v.back() < find_number) cout << 0 << '\n';
        else cout << binary_search(v.begin(), v.end(), find_number) << '\n';
    }

    return 0;
}