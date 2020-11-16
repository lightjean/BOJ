#include <iostream>
using namespace std;

int main() {
    int n, m, arr[100];
    cin >> n >> m;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 1; i <= m; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (arr[j] % i > arr[j + 1] % i) { // swap
                int temp;
                temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++) 
        cout << arr[i] << '\n';
        
    return 0;
}