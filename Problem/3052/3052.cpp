#include <iostream>
using namespace std;

int main()
{
    int num, count = 0;
    bool remainder[42] = {false};

    for(int i = 0; i < 10; i++) {
        cin >> num;
        remainder[num % 42] = true;
    }

    for(int i = 0; i < 42; i++) {
        if(remainder[i] == true) {
            count++;
        }
    }

    cout << count;
    return 0;
}
