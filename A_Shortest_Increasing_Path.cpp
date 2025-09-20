#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        long long x, y;
        cin >> x >> y;
        if(x < y) {
            cout << 2 << endl;
        } else {
            long long low = max(y + 1, x - y + 1);
            long long up = x - 1;
            if(low <= up) {
                cout << 3 << endl;
            } else {
                cout << -1 << endl;
            }
        }
    }
    return 0;
}