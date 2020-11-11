#include <iostream>
#include <string>
using namespace std;

bool prime(int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string old_number, add_number, new_number;
    cin >> old_number >> add_number;
    new_number = add_number + old_number;
    
    if (prime(stoi(old_number)) && prime(stoi(new_number))) cout << "Yes" << '\n';
    else cout << "No" << '\n';
    return 0;
}