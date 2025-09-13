#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for(int test = 0; test < t; test++) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<long long> odds;
        long long sum_even = 0;
        for(auto x : a) {
            if(x % 2 == 0) {
                sum_even += x;
            } else {
                odds.push_back(x);
            }
        }
        int k = odds.size();
        long long ans = 0;
        if(k > 0) {
            ans += sum_even;
        }
        sort(odds.rbegin(), odds.rend());
        int cut_num = (k + 1) / 2;
        for(int i = 0; i < cut_num; i++) {
            ans += odds[i];
        }
        cout << ans << endl;
    }
    return 0;
}