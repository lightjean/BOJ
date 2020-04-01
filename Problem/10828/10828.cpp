#include <iostream>
#include <string>
using namespace std;

struct Stack {
    int size;
    int data[10000];

    Stack() {
        size = 0;
    }

    void push(int num) {
        data[size] = num;
        size += 1;
    }

    int pop() {
        if(empty()) {
            return -1;
        } else {
            size -= 1;
            return data[size];
        }
    }

    bool empty() {
        if(size == 0)
            return true;
        else return false;
    }

    int top() {
        if(empty())
            return -1;
        else {
            return data[size-1];
        }
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, num;
    string str;
    Stack s;

    cin >> n;
    
    while(n--) {
        cin >> str;
        
        if(str == "push") {
            cin >> num;
            s.push(num);
        } else if(str == "pop") {
            cout << s.pop() << '\n';
        } else if(str == "size") {
            cout << s.size << '\n';
        } else if(str == "empty") {
            cout << s.empty() << '\n';
        } else if(str == "top")
            cout << s.top() << '\n';
    }
    
    return 0;
}