#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, max, min, num[1000001];
    cin >> n;
    for(int i=0; i<n; i++)
        cin >> num[i];
    max = num[0];
    min = num[0];
    for(int i=1; i<n; i++){
        if(max<num[i])
            max = num[i];
        if(min>num[i])
            min = num[i];
    }
    cout << min << " " << max << '\n';
    return 0;
}