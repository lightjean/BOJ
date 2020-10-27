#include <iostream>
using namespace std;

int main() {
    int w, p, arr[100];
    bool check[101] = {0}; // 가능한 방 크기
    cin >> w >> p;

    arr[0] = 0;

    for (int i = 1; i <= p; i++) {
        int tmp;
        cin >> tmp;
        arr[i] = tmp;
    }

    arr[p + 1] = w;

    for (int i = 0; i <= p; i++)
        for (int j = i + 1; j <= p + 1; j++)
            check[arr[j] - arr[i]] = 1;

    for (int i = 0; i <= w; i++)
        if (check[i] == 1)
            cout << i << " ";
    
    return 0;
}