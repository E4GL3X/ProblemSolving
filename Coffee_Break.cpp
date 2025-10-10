#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        string time_str;
        cin >> time_str;
        int hh = (time_str[0] - '0') * 10 + (time_str[1] - '0');
        int mm = (time_str[3] - '0') * 10 + (time_str[4] - '0');
        int cur_min = hh * 60 + mm;
        vector<int> specials = {0, 671, 1342};
        int next_min = -1;
        for(int s : specials) {
            if(s >= cur_min) {
                next_min = s;
                break;
            }
        }
        if(next_min == -1) {
            next_min = 0;
        }
        int next_hh = next_min / 60;
        int next_mm = next_min % 60;
        cout << setfill('0') << setw(2) << next_hh << ":" << setw(2) << next_mm << endl;
    }
    return 0;
}