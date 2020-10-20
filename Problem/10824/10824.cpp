#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b, c, d;
    cin >> a >> b >> c >> d;

    string num1 = a + b, num2 = c + d;
    long long int ans = stoll(num1) + stoll(num2);
    
    cout << ans << '\n';
    return 0;
}