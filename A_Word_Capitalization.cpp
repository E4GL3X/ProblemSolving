#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    char c = s[0];
    for(c = 97; c < 123 ; c++) {
        if(s[0] == c) {
            s[0] = c - 32;
            break;
        }
    }
    cout << s << endl;
    return 0;
}