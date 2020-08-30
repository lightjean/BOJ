#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int sum = 0, temp;
    vector<int> v1, num;

    for(int i = 0; i < 8; i++) {
        cin >> temp;
        v1.push_back(temp);
    }

    vector<int> v2(v1);

    sort(v1.begin(), v1.end(), greater<int>());

    for(int i = 0; i < 5; i++) {
        sum += v1[i];
        for(int j = 0; j < 8; j++) {
            if(v1[i] == v2[j]) {
                num.push_back(j + 1);
            }
        }
    }

    sort(num.begin(), num.end());
    cout << sum << '\n';

    for(int i = 0; i < 5; i++) {
        cout << num[i] << " ";
    }

    return 0;
}