#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        int n;
        cin >> n;
        int mx = 0;
        for(int j = 0; j < n; j++) {
            int x;
            cin >> x;
            mx = max(mx, x);
        }
        cout << mx << endl;
    }
    return 0;
}