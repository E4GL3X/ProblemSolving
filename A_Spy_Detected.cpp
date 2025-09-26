#include <bits/stdc++.h>
using namespace std;

int main() {

    int t; 
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        int max;
        if (a[0] == a[1] || a[0] == a[2]) max = a[0];
        else max = a[1];

        int ans = -1;
        for (int i = 0; i < n; i++) {
            if (a[i] != max) {
                ans = i + 1;
                break;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
