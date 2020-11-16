#include <iostream>
using namespace std;

int main()
{
    int num;
    bool check[30] = {false};

    while(cin >> num) {
        check[num - 1] = true;
    }

    for(int i = 0; i < 30; i++) {
        if(check[i] == false) {
            cout << i + 1 << '\n';
        }
    }
    return 0;
}