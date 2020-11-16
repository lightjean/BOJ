#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, x, a[10000];

    cin >> n >> x;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i] < x) {
            cout << a[i] << " ";
        }
    }

    return 0;
}