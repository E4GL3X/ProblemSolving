#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc;
    cin >> tc;
    for (int i = 0; i < tc; i++) {
        long long a, b;
        cin >> a >> b;
        int count = 0;
        if (a % b != 0) {
            count = b - (a % b);
        }
        cout << count << endl;
    }
    return 0;
}