#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string str, arr[10000];
    cin >> str;

    for (int i = 0; i < str.size(); i++) 
        arr[i] = str.substr(i, str.size());

    sort(arr, arr + str.size());

    for (int i = 0; i < str.size(); i++)
        cout << arr[i] << '\n';

    return 0;
}