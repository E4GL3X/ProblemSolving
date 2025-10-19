#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (auto &x : a) cin >> x;

        vector<long long> pref(n);
        pref[0] = a[0];
        for (int i = 1; i < n; ++i)
            pref[i] = max(pref[i - 1], a[i]);

        long long cost = 0;
        for (int i = 0; i < n; i += 2) {
            long long ub = pref[i];
            if (i > 0) ub = min(ub, pref[i - 1] - 1);
            if (i + 1 < n) ub = min(ub, pref[i + 1] - 1);
            cost += max(0LL, a[i] - ub);
        }
        cout << cost << '\n';
    }
}
