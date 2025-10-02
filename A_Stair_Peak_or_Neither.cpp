/**
 * Author: E4GL3
 * GitHub : https://github.com/e4GL3X/
 * Created: 2025-10-02
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
        int a, b, c;
        cin >> a >> b >> c;
        if (a, b, c >= 0 && a, b, c <= 9)
        {
            if (a < b && a < c && b < c)
            {
                cout << "STAIR" << endl;
            }
            else if (b > a && b > c)
            {
                cout << "PEAK" << endl;
            }
            else
            {
                cout << "NONE" << endl;
            }
        }
    }
    return 0;
}