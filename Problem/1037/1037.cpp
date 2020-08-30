#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int num, temp;
    vector<int> v;

    cin >> num;
    
    for(int i = 0; i < num; i++) {
        cin >> temp;
        v.push_back(temp);
    }

    sort(v.begin(), v.end(), greater<int>());
    cout << v.front() * v.back() << '\n';
    return 0;
}