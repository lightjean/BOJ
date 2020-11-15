#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool cmp(const pair<int, string> &a, const pair<int, string> &b) {
    return a.first < b.first;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<pair<int, string>> v;
    for (int i = 0; i < n; i++) {
        int age;
        string name;
        cin >> age >> name;
        v.push_back({ age, name });
    }

    stable_sort(v.begin(), v.end(), cmp);
    
    for (int i = 0; i < n; i++)
        cout << v[i].first << " " << v[i].second << '\n';

    return 0;
}