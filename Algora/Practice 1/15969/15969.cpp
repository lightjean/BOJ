#include <iostream>
using namespace std;

int main()
{
    int n, max, min, score[1000];
    cin >> n;
    for(int i=0; i<n; i++)
        cin >> score[i];
    max = score[0];
    min = score[0];
    for(int i=1; i<n; i++){
        if(max<score[i])
            max = score[i];
        if(min>score[i])
            min = score[i];
    }
    cout << max - min << '\n';
    return 0;
}