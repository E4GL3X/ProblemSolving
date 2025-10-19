/**
 * Author: E4GL3
 * GitHub : https://github.com/e4GL3X/
 * Created: 2025-10-19
 * 
 */


#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int count = 0;
        int last = -100000;
        for(int j = 0; j < n; j++) {
            if(s[j] == '1') {
                if(last < j - k + 1) count++;
                last = j;
            }
        }
        cout << count << endl;
    }
    return 0;
}