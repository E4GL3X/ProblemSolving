#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int test = 0; test < t; test++)
    {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a.begin(), a.end());
        long long ans = 0;
        for (int i = 0; i < n; i += 2)
        {
            ans = max(ans, a[i + 1] - a[i]);
        }
        cout << ans << endl;
    }
    return 0;
}