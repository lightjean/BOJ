#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        int n;
        string names, choose;
        vector<string> v;

        getline(cin, names);
        cin >> choose >> n;
        cin.ignore();

        char *tmp = new char[names.size() + 1];
        copy(names.begin(), names.end(), tmp);
        tmp[names.size()] = '\0';

        char *tok = strtok(tmp, " ");

        while (tok != NULL) {
            string name = tok;
            v.push_back(name);
            tok = strtok(NULL, " ");
        }

        int index = find(v.begin(), v.end(), choose) - v.begin();

        for (int i = 1; i < n; i++) {
            if (index + 1 == v.size()) {
                index = 0;
            } else {
                index++;
            }
        }

        cout << v[index] << '\n';
        delete[] tmp;
    }

    return 0;
}