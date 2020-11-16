#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, ans, idx = 0;
    string str, temp;
    vector<int> v;

    cin >> str;

    while(str[idx] != '\0') {
        if(str[idx] == '+' || str[idx] == '-') {
            v.push_back(stoi(temp));
        } else {
            temp += str[idx];
        }
        idx++;
    }

    for(int i = 0; i < n; i++) {
        for(int j = i; i < n; j++) {
            
        }
    }
}