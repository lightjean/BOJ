#include <iostream>
using namespace std;

int main()
{
    int n;
    char star[200];
    cin >> n;
    for(int i=0; i<2*n-1; i++){
        star[i] = '*';
    } //별을 미리 넣는다
    for(int i=0; i<(2*n-1)/2; i++){
        for(int j=0; j<2*n-1-i; j++){
            cout << star[j];
        }
        star[i] = ' ';
        star[2*n-2-i] = ' ';
        cout << '\n';
    } // 양끝으로 공백을 하나씩 넣어나가되, 출력은 맨 끝에서 1칸씩 줄이면서
    for(int i=0; i<n; i++){
        cout << star[i];
    } //별이 한개 있는 부분까지 출력
    for(int i=(2*n-1)/2; i>0; i--){
        cout << '\n';
        star[i-1] = '*';
        star[2*n-1-i] = '*';
        for(int j=0; j<2*n-i; j++){
            cout << star[j];
        }
    } // 위의 과정을 역순으로 반복
    return 0;
}