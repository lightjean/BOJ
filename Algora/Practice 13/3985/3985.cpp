#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int l, n, p, k, present = 0, expect, real, temp = 0, count, rollcake[1001] = {0,};
    cin >> l;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> p >> k;
        if(k-p>present){
            expect = i+1;
            present = k-p;
        } // k-p가 가장 큰 방청객이 가장 많은 조각을 받을 것으로 기대되는 방청객
        for(int j=p-1; j<k; j++){
            if(rollcake[j]==0)
                rollcake[j] = i+1;
        } // 롤케이크 번호를 매기는데, 덮어씌우지 못하도록 함
    }
    for(int i=0; i<n; i++){
        count = 0;
        for(int j=0; j<l; j++){
            if(rollcake[j]==i+1)
                count++;
        } // 조각 개수 세기
        if(temp<count){
            temp = count;
            real = i+1;
        } // 조각이 가장 많은 방청객 찾기
    } // 1번 방청객부터 순서대로 각 방청객의 번호가 적힌 롤케이크 조각 개수를 셈
    cout << expect << '\n';
    cout << real << '\n';
    return 0;
}