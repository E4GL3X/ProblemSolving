/**
 * Author: E4GL3
 * GitHub : https://github.com/e4GL3X/
 * Created: 2025-10-02
 * 
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc; 
    cin >> tc;
    while (tc--) {
        string s; 
        cin >> s;
        string newstring;
        newstring.push_back(s[0]);
        for (int i = 1; i < (int)s.size(); i += 2) {
            newstring.push_back(s[i]);
        }

        cout << newstring << "\n";
    }
    return 0;
}
