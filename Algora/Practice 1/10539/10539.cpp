#include <iostream>
using namespace std;

int main()
{
    int n, k=2, sum = 0, series_a[100], series_b[100];
    cin >> n;
    for(int i=0; i<n; i++)
        cin >> series_b[i];
    series_a[0] = series_b[0];
    for(int i=1; i<n; i++){
        sum += series_a[i-1];
        series_a[i] = series_b[i] * k - sum;
        k++;
    }
    for(int i=0; i<n; i++)
        cout << series_a[i] << " ";
    return 0;
}