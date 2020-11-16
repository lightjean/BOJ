#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = 1;
    bool prime[1000001] = {false};

    prime[0] = true;
    prime[1] = true;

    for(int i = 2; i <= 1000000; i++) {
        if(prime[i] == false) {
            for(int j = i * 2; j <= 1000000; j += i) {
                prime[j] = true;
            }
        }
    }

    while(1) {
        int a, b;
        bool check = false;
        cin >> n;

        if(n == 0) {
            break;
        }

        for(int i = 3; i <= n; i++) {
            if(prime[i] == false) {
                if(prime[n - i] == false) {
                    check = true;
                    a = i;
                    b = n - i;
                    break;
                }
            }
        }

        if(check) {
            cout << n << " = " << a << " + " << b << '\n';
        } else {
            cout << "Goldbach's conjecture is wrong." << '\n';
        }
    }

    return 0;
}