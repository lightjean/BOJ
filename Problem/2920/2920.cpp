#include <iostream>
using namespace std;

int main() {
    int arr[8];
    bool ascending = true, descending = true;

    for(int i = 0; i < 8; i++) {
        cin >> arr[i];
    }

    for(int i = 0; i < 8; i++) {
        if(arr[i] != i + 1) ascending = false;
    }

    if(ascending) {
        cout << "ascending" << '\n';
        return 0;
    }

    for(int i = 0; i < 8; i++) {
        if(arr[i] != 8 - i) descending = false;
    }

    if(descending) {
        cout << "descending" << '\n';
        return 0;
    }

    cout << "mixed" << '\n';
    return 0;
}