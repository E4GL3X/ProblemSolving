#include <bits/stdc++.h>
using namespace std;

bool valid(int r, int k) {
    int mx = max(r, k), mn = min(r, k);
    return mx <= 2 * (mn + 1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        int r1 = a, k1 = b;         
        int r2 = c - a, k2 = d - b;  

        if (valid(r1, k1) && valid(r2, k2))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
