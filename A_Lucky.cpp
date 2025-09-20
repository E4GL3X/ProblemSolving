#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int num;
        cin >> num;
        int d[6];
        
        for (int i = 5; i >= 0; i--) {
            d[i] = num % 10;
            num /= 10;
        }

        int first = d[0] + d[1] + d[2];
        int last  = d[3] + d[4] + d[5];

        if (first == last) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
