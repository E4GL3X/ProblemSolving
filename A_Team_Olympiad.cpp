/**
 * Author: E4GL3
 * GitHub : https://github.com/e4GL3X/
 * Created: 2025-09-28
 * 
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> type1, type2, type3;

    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        if (x == 1) type1.push_back(i);
        else if (x == 2) type2.push_back(i);
        else type3.push_back(i);
    }

    int teams = min({(int)type1.size(), (int)type2.size(), (int)type3.size()});
    cout << teams << "\n";

    for (int i = 0; i < teams; i++) {
        cout << type1[i] << " " << type2[i] << " " << type3[i] << "\n";
    }

    return 0;
}
