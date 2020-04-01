#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, i = 0, bonus = 0, total = 0;
    char ox[10001];

    cin >> n;

    while(n--) {
        cin >> ox[i];
        if(ox[i] == 'O') {
            total += i + 1;
            total += bonus;
            bonus += 1;
        } else bonus = 0;
        i++;
    }
    cout << total;
    return 0;
}