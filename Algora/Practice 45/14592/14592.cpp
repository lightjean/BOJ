#include <cstdio>
#include <vector>
#include <queue>
using namespace std;

struct Participant {
    int idx, a, b, c;
};

struct cmp {
    bool operator()(Participant &p1, Participant &p2) {
        if (p1.a != p2.a)
            return p1.a < p2.a;
        else if (p1.b != p2.b)
            return p1.b > p2.b;
        return p1.c > p2.c;
    }
};

int main() {
    Participant p, ans;
    priority_queue<Participant, vector<Participant>, cmp> pq;
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        p.idx = i + 1;
        scanf("%d%d%d", &(p.a), &(p.b), &(p.c));
        pq.push(p);
    }

    ans = pq.top();
    printf("%d\n", ans.idx);
    return 0;
}