#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, memory[46];
    cin >> n;
    memory[0] = 0;
    memory[1] = 1;
    for(int i=0; i<n-1; i++){
        memory[i+2] = memory[i] + memory[i+1];
    }
    cout << memory[n];
    return 0;
}