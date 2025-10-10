#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for(int test=0; test<t; test++) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<int> need(n);
        for(int j=0; j<n; j++) {
            int target = (j % 2 == 0 ? 0 : 1);
            int curr = s[j] - '0';
            need[j] = (curr != target ? 1 : 0);
        }
        vector<int> coeff(n, 0);
        vector<int> constant(n, 0);
        if(n >= 1) {
            coeff[0] = 1;
            constant[0] = 0;
        }
        if(n >= 2) {
            coeff[1] = 1;
            constant[1] = need[0];
            for(int j=1; j <= n-2; j++) {
                coeff[j+1] = (coeff[j-1] + coeff[j]) % 2;
                constant[j+1] = (need[j] + constant[j-1] + constant[j]) % 2;
            }
        }
        int left_coeff, left_const, d_last;
        if(n == 1) {
            left_coeff = coeff[0];
            left_const = constant[0];
            d_last = need[0];
        } else {
            left_coeff = (coeff[n-2] + coeff[n-1]) % 2;
            left_const = (constant[n-2] + constant[n-1]) % 2;
            d_last = need[n-1];
        }
        long long ans = -1;
        if(left_coeff == 1) {
            int x0_val = (d_last + left_const) % 2;
            int cnt = 0;
            for(int j=0; j<n; j++) {
                int xj = (constant[j] + coeff[j] * x0_val) % 2;
                if(xj == 1) cnt++;
            }
            ans = cnt;
        } else {
            if(left_const == d_last) {
                int cnt0 = 0;
                for(int j=0; j<n; j++) {
                    int xj = constant[j] % 2;
                    cnt0 += xj;
                }
                int cnt1 = 0;
                for(int j=0; j<n; j++) {
                    int xj = (constant[j] + coeff[j]) % 2;
                    cnt1 += xj;
                }
                ans = min(cnt0, cnt1);
            } else {
                ans = -1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}