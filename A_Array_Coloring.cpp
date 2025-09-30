/**
 * Author: E4GL3
 * GitHub : https://github.com/e4GL3X/
 * Created: 2025-10-01
 * 
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc; cin >> tc;
    while (tc--) {
        int n; cin >> n;
        vector<int> arr(n);
        int ans = 0;
        int x = 0;
        for (int i = 0; i < n; i++) {
            cin >> x;
            ans = x + ans;
        }
        if (ans % 2 == 0){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}