#include <iostream>
using namespace std;

int main()
{
    int max = 0, index, series[9];

    for(int i = 0; i < 9; i++) {
        cin >> series[i];
        
        if(max < series[i]) {
            max = series[i];
            index = i + 1;
        }
    }

    cout << max << '\n' << index;
    return 0;
}