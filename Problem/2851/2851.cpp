#include <iostream>
using namespace std;

int main() {
    int mushroom[10], ans, sum = 0, min = 100, diff = 0;

    for(int i = 0; i < 10; i++) {
        cin >> mushroom[i];
        sum += mushroom[i];
        
        if(100 - sum < 0) diff = sum - 100;
        else diff = 100 - sum;

        if(diff <= min) {
            min = diff;
            ans = sum;
        }
    }

    cout << ans << '\n';
    return 0;
}