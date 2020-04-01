#include <vector>

long long sum(std::vector<int> &a)
{
    long long ans = 0;
    for(int i = 0; i < a.size(); i++) {
        ans += a[i];
    }
    return ans;
} // 함수만 구현하면 됨