#include <iostream>
using namespace std;

int main()
{
    int idx = 0, time = 0;
    string str;

    cin >> str;

    while(str[idx] != '\0') {
        if(str[idx] == 'A' || str[idx] == 'B' || str[idx] == 'C') time += 3;

        else if(str[idx] == 'D' || str[idx] == 'E' || str[idx] == 'F') time += 4;

        else if(str[idx] == 'G' || str[idx] == 'H' || str[idx] == 'I') time += 5;

        else if(str[idx] == 'J' || str[idx] == 'K' || str[idx] == 'L') time += 6;

        else if(str[idx] == 'M' || str[idx] == 'N' || str[idx] == 'O') time += 7;

        else if(str[idx] == 'P' || str[idx] == 'Q' || str[idx] == 'R' || str[idx] == 'S') time += 8;

        else if(str[idx] == 'T' || str[idx] == 'U' || str[idx] == 'V') time += 9;

        else if(str[idx] == 'W' || str[idx] == 'X' || str[idx] == 'Y' || str[idx] == 'Z') time += 10;

        idx++;
    }
    
    cout << time << '\n';
    return 0;
}