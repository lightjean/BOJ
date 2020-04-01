#include <iostream>
using namespace std;

struct Queue {
    int arr[10000], size, idx_f, idx_b;

    Queue() {
        size = 0;
        idx_f = 0;
        idx_b = 0;
    }

    void push(int a) {
        arr[idx_b] = a;
        size += 1;
        idx_b++;
    }

    int pop() {
        if(!empty()) {
            size -= 1;
            idx_f++;
            return arr[idx_f - 1];
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
            return arr[idx_f];
        } else {
            return -1;
        }
    }

    int back() {
        if(!empty()) {
            return arr[idx_b - 1];
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
    Queue q;

    cin >> n;

    while(n--) {
        cin >> str;
        if(str == "push") {
            cin >> num;
            q.push(num);
        } else if(str == "pop") {
            cout << q.pop() << '\n';
        } else if(str == "size") {
            cout << q.size << '\n';
        } else if(str == "empty") {
            cout << q.empty() << '\n';
        } else if(str == "front") {
            cout << q.front() << '\n';
        } else {
            cout << q.back() << '\n';
        }
    }

    return 0;
}