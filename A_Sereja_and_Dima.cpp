#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int l = 0, r = n - 1;
    int sereja = 0, dima = 0;

    for (int turn = 0; l <= r; turn++) {
        int pick;
        if (a[l] > a[r]) {
            pick = a[l++];
        } else {
            pick = a[r--];
        }

        if (turn % 2 == 0) sereja += pick;
        else dima += pick;
    }

    cout << sereja << " " << dima << endl;
}
