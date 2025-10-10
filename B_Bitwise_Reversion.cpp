#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int test = 0; test < t; test++)
    {
        long long x, y, z;
        cin >> x >> y >> z;
        bool possible = true;
        for (int bit = 0; bit < 32; bit++)
        {
            int xb = (x >> bit) & 1;
            int yb = (y >> bit) & 1;
            int zb = (z >> bit) & 1;
            bool ok = false;
            for (int a = 0; a < 2; a++)
            {
                for (int b = 0; b < 2; b++)
                {
                    for (int c = 0; c < 2; c++)
                    {
                        if ((a & b) == xb && (b & c) == yb && (a & c) == zb)
                            ok = true;
                    }
                }
            }
            if (!ok)
                possible = false;
        }
        if (possible)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}