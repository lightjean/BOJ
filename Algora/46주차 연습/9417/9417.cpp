#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    cin.ignore();

    while (n--) {
        int max = 0;
        vector<int> v;
        string str;

        getline(cin, str);

        char *tmp = new char[str.size() + 1];
        copy(str.begin(), str.end(), tmp);
        tmp[str.size()] = '\0';

        for (char *tok = strtok(tmp, " "); tok != NULL; tok = strtok(NULL, " ")) {
            v.push_back(atoi(tok));
        }

        vector<int>::iterator iter1, iter2;

        for (iter1 = v.begin(); iter1 != v.end() - 1; iter1++) {
            for (iter2 = iter1 + 1; iter2 != v.end(); iter2++) {
                if (gcd(*iter1, *iter2) > max) {
                    max = gcd(*iter1, *iter2);
                }
            }
        }
        cout << max << '\n';
    }
    return 0;
}