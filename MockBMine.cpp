#include <iostream>

using namespace std;

int main() {
    int t, p;
    cin >> t >> p;
    int fc = 2;
    int change = p - t;
    int coin[] = {32, 16, 8, 4, 2, 1};
    bool uc[6] = {false};
    for (int i = 0; i < 6; i++) {
        while (change >= coin[i] && !uc[i]) {
            change -= coin[i];
            uc[i] = true;
        }
    }
    bool m = false;
    for (int i = 0; i < 6; i++) {
        if (coin[i] == fc && uc[i]) {
            m = true;
            break;
        }
    }

    if (m) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
