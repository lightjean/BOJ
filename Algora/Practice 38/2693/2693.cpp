#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t, temp;
    vector<int> v;
    cin >> t;

    for(int i = 0; i < t; i++) {
        for(int j = 0; j < 10; j++) {
            cin >> temp;
            v.push_back(temp);
        }

        sort(v.begin(), v.end(), greater<int>());
        cout << v[2] << '\n';
        v.clear();
    }

    return 0;
}