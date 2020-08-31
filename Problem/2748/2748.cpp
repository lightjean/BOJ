#include <iostream>
using namespace std;

long long int memory[91] = {0};

long long int fibo(int a) {
    if(a == 1) return 1;
    if(a == 2) return 1;
    if(memory[a] != 0) return memory[a]; // 계산했던 값은 바로 반환
    return memory[a] = fibo(a - 1) + fibo(a - 2);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    cout << fibo(n) << '\n';
    return 0;
}