#include <iostream>
using namespace std;

const int MAX = 10000;

struct Deque {
    int arr[10000], size, idx_f, idx_b;

    Deque() {
        size = 0;
        idx_f = 0;
        idx_b = 0;
    }

    void push_front(int a) {
        arr[idx_f] = a;
        idx_f = (idx_f - 1 + MAX) % MAX; // 이렇게 하면 idx_f가 배열 맨 끝으로 옮겨짐
        size += 1;
    }

    void push_back(int a) {
        idx_b = (idx_b + 1 + MAX) % MAX;
        arr[idx_b] = a;
        size += 1;
    }

    int pop_front() {
        if(!empty()) {
            size -= 1;
            idx_f = (idx_f + 1) % MAX;
            return arr[idx_f];
        } else {
            return -1;
        }
    }

    int pop_back() {
        if(!empty()) {
            size -= 1;
            idx_b = (idx_b - 1 + MAX) % MAX;
            return arr[(idx_b + 1) % MAX];
        } else {
            return -1;
        }
    }

    bool empty() {
        if(size == 0) {
            return true;
        } else {
            return false;
        }
    }
    
    int front() {
        if(!empty()) {
            return arr[(idx_f + 1) % MAX];
        } else {
            return -1;
        }
    }

    int back() {
        if(!empty()) {
            return arr[idx_b];
        } else {
            return -1;
        }
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, num;
    string str;
    Deque dq;

    cin >> n;

    while(n--) {
        cin >> str;

        if(str == "push_front") {
            cin >> num;
            dq.push_front(num);
        } else if(str == "push_back") {
            cin >> num;
            dq.push_back(num);
        } else if(str == "pop_front") {
            cout << dq.pop_front() << '\n';
        } else if(str == "pop_back") {
            cout << dq.pop_back() << '\n';
        } else if(str == "size") {
            cout << dq.size << '\n';
        } else if(str == "empty") {
            cout << dq.empty() << '\n';
        } else if(str == "front") {
            cout << dq.front() << '\n';
        } else {
            cout << dq.back() << '\n';
        }
    }

    return 0;
} // 구현이 까다로움