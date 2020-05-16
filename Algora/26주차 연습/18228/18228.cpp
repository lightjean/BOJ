#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, penguin, min_left = 1000000000, min_right = 1000000000, ice[200000];

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> ice[i];

        if(ice[i] == -1) {
            penguin = i;
        }
    }

    for(int i = penguin - 1; i >= 0; i--) {
        if(min_left > ice[i]) {
            min_left = ice[i];
        }
    }

    for(int i = penguin + 1; i < n; i++) {
        if(min_right > ice[i]) {
            min_right = ice[i];
        }
    }

    cout << min_left + min_right << '\n';
    return 0;
}