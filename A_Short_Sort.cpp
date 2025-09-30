/**
 * Author: E4GL3
 * GitHub : https://github.com/e4GL3X/
 * Created: 2025-10-01
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
        string s;
        cin >> s;
        int n = s.length();
        char arr[n + 1];
        for (int i = 0; i < n; i++)
        {
            arr[i] = s[i];
        }
        if ((arr[0] == 'a' && arr[1] == 'b' && arr[2] == 'c') || (arr[0] == 'a' && arr[1] == 'c' && arr[2] == 'b') || (arr[0] == 'b' && arr[1] == 'a' && arr[2] == 'c') || (arr[0] == 'c' && arr[1] == 'b' && arr[2] == 'a'))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}