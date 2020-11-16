#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int num, a, b;

    cin >> num;

    for(int i = 0; i < num; i++){
        cin >> a >> b;
        cout << a + b << '\n';
    }

    return 0;
}