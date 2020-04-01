#include <iostream>
using namespace std;

int main()
{
    int n, cycle = 0, num, new_num = -1;

    cin >> n;
    num = n;

    while(n != new_num) {
        new_num = (num % 10) * 10 + ((num / 10) + (num % 10)) % 10;
        num = new_num;
        cycle++;
    } 

    cout << cycle;
    return 0;
} //while문 조건 안에 들어간 변수를 미리 초기화 시켜놓아야 함.