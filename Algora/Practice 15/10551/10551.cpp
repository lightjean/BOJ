#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int finger[8] = {0};
    string str;

    cin >> str;

    for(int i = 0; i < 50; i++) {
        if(str[i] == '\0') {
            break;
        } else if(str[i] == '1' || str[i] == 'Q' || str[i] == 'A' || str[i] == 'Z') {
            finger[0]++;
        } else if(str[i] == '2' || str[i] == 'W' || str[i] == 'S' || str[i] == 'X') {
            finger[1]++;
        } else if(str[i] == '3' || str[i] == 'E' || str[i] == 'D' || str[i] == 'C') {
            finger[2]++;
        } else if(str[i] == '4' || str[i] == '5' || str[i] == 'R' || str[i] == 'T' || str[i] == 'F' || str[i] == 'G' || str[i] == 'V' || str[i] == 'B') {
            finger[3]++;
        } else if(str[i] == '6' || str[i] == '7' || str[i] == 'Y' || str[i] == 'U' || str[i] == 'H' || str[i] == 'J' || str[i] == 'N' || str[i] == 'M') {
            finger[4]++;
        } else if(str[i] == '8' || str[i] == 'I' || str[i] == 'K' || str[i] == ',') {
            finger[5]++;
        } else if(str[i] == '9' || str[i] == 'O' || str[i] == 'L' || str[i] == '.') {
            finger[6]++;
        } else if(str[i] == '0' || str[i] == '-' || str[i] == '=' || str[i] == 'P' || str[i] == '[' || str[i] == ']' || str[i] == ';' || str[i] == '\'' || str[i] == '/') {
            finger[7]++;
        }
    }

    for(int i = 0; i < 8; i++) {
        cout << finger[i] << '\n';
    }
    return 0;
}