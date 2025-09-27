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
    int t;
    cin >> t;
    while (t--) {
        int arr[3]={0};
        cin >> arr[0] >> arr[1] >> arr[2];
        if (arr[0] + arr[1] >= 10 || 
            arr[1] + arr[2] >= 10 || 
            arr[0] + arr[2] >= 10) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}