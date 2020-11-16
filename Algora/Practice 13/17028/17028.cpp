#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, count, series[101] = {0,};
    cin >> n;
    count = n-1; // 이동을 많이 해야하는 최악의 경우
    for(int i=0; i<n; i++)
        cin >> series[i];
    for(int i=n-2; i>=0; i--){
        if(series[i]<series[i+1])
            count = i;
        else break;
    } // 뒤에서부터 원소들을 비교
    cout << count;
    return 0;
}