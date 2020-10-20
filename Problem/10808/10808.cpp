#include <iostream>
using namespace std;

int main() {
    int cnt[26] = {0};
    char word[101];

    cin >> word;

    int i = 0;

    while (word[i] != '\0') {
        cnt[(int)word[i] - (int)'a']++;
        i++;
    }

    for (int i = 0; i < 26; i++)
        cout << cnt[i] << " ";

    return 0;
}