#include <iostream>
using namespace std;

int main()
{
    int n, k=1, count=0;
    cin >> n;
    while(n!=0){
        if(n-k<0){
            k=1;
            continue;    
        }
        n -= k;
        k++;
        count++;
    }
    cout << count << '\n';
    return 0;
}