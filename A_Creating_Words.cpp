/**
 * Author: E4GL3
 * GitHub : https://github.com/e4GL3X/
 * Created: 2025-09-30
 *
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while (tc--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        char temp = s1[0];
        s1[0] = s2[0];
        s2[0] = temp;
        cout << s1 << " " << s2 << "\n";
    }

    return 0;
}