/**
 * Author: E4GL3
 * GitHub : https://github.com/e4GL3X/
 * Created: 2025-09-27
 * 
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int unit = n%10;
    if (unit == 0) unit = 10;
    cout << unit << " " << n - unit << endl;
    return 0;
}