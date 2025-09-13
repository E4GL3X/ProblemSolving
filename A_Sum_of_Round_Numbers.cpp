#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc; 
    cin >> tc;
    while (tc--) {
        string s; 
        cin >> s;
        vector<string> ans;
        int n = s.size();
        for (int i = 0; i < n; i++) {
            if (s[i] != '0') {
                string t = "";
                t += s[i];
                for (int j = i + 1; j < n; j++) {
                    t += '0';
                }
                ans.push_back(t);
            }
        }
        cout << ans.size() << "\n";
        for (auto x : ans) {
            cout << x << " ";
        }
        cout << "\n";
    }

    return 0;
}