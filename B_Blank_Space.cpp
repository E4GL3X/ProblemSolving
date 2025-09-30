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
        int n;
        cin >> n;
        vector<int> arr(n);

        int count = 0, newmax = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == 0) {
                count++;
            }
            else {
                newmax = max(newmax, count); 
                count = 0;
            }
        }
        newmax = max(newmax, count);

        cout << newmax << "\n";
    }

    return 0;
}
