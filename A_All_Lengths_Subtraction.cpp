#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for(int test=0; test<t; test++) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i=0; i<n; i++) {
            cin >> a[i];
        }
        vector<int> position(n+1);
        for(int i=0; i<n; i++) {
            position[a[i]] = i;
        }
        int left = 0;
        int right = n-1;
        bool possible = true;
        for(int s=n; s>=2; s--) {
            int need_val = n - s + 1;
            int cur_pos = position[need_val];
            if(cur_pos == left) {
                left++;
            } else if(cur_pos == right) {
                right--;
            } else {
                possible = false;
                break;
            }
        }
        if(possible) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}