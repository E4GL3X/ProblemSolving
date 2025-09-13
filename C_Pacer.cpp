#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        long long m;
        cin >> n >> m;
        vector<pair<long long, int>> requirements(n);
        for (int j = 0; j < n; j++) {
            cin >> requirements[j].first >> requirements[j].second;
        }
        int current_side = 0;
        long long last_audio_minute = -1; 
        long long points = 0;

        for (int j = 0; j < n; j++) {
            long long audio_minute = requirements[j].first;
            int required_side = requirements[j].second;

            for (long long minute = last_audio_minute + 1; minute < audio_minute; minute++) {
                if (minute < m) {
                    if (current_side == 0) {
                        current_side = 1;
                        points++;
                    }
                }
            }

            if (current_side != required_side) {
                current_side = required_side;
            }
            last_audio_minute = audio_minute;
        }

        for (long long minute = last_audio_minute + 1; minute < m; minute++) {
            if (current_side == 0) {
                current_side = 1;
                points++;
            }
        }

        cout << points << endl;
    }
    return 0;
}