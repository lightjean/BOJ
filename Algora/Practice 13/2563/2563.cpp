#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, a, b, count = 0, area[101][101] = {0,};
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a >> b;
        for(int j=100-(10+b); j<110-(10+b); j++){
            for(int k=a; k<a+10; k++){
                area[j][k] = 1;
            }
        }
    } // 주어진 사이 거리를 이용해 색종이 왼쪽 상단의 좌표로 부터 10*10을 1로 표시
    for(int i=0; i<100; i++){
        for(int j=0; j<100; j++){
            if(area[i][j]==1)
                count++;
        }
    } // area 배열 원소를 전부 확인, 1 개수를 출력
    cout << count;
    return 0;
}