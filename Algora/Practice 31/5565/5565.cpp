#include <iostream>
using namespace std;

int main() {
    int total, book;

    cin >> total;

    for(int i = 0; i < 9; i++) {
        cin >> book;
        total -= book;
    }

    cout << total << '\n';
    return 0;
}