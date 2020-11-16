#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k, max = 0, temp[100000], sum[100000] = {0,};

    cin >> n >> k;

    for(int i = 0; i < n; i++) {
        cin >> temp[i];
    }

    for(int i = 0; i < k; i++) {
        sum[0] += temp[i];
    }

    max = sum[0];

    for(int i = 1; i < n - k + 1; i++) {
        sum[i] = sum[i - 1] + temp[i + k - 1] - temp[i - 1];

        if(max < sum[i]) {
            max = sum[i];
        }
    } // 이중 반복을 피해서 시간 초과 해결하기

    cout << max << '\n';

    return 0;
}