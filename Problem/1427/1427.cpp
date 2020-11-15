#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string n;
    vector<int> v;
    cin >> n;

    string::iterator iter1;
    vector<int>::iterator iter2;
    for (iter1 = n.begin(); iter1 != n.end(); iter1++)
        v.push_back(*iter1 - '0');

    sort(v.begin(), v.end(), greater<int>());
    
    for (iter2 = v.begin(); iter2 != v.end(); iter2++)
        cout << *iter2;

    return 0;
}