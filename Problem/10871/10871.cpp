#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, x, num;

    cin >> n >> x;

    for(int i = 0; i < n; i++) {
        cin >> num;

        if(x > num) {
            cout << num << " ";
        }
    }
    return 0;
}