#include <bits/stdc++.h>
using namespace std;

int main() {
    int k, r;
    cin >> k >> r;
    int shovels = 1;
    while (true) {
        int total = shovels * k;
        int remainder = total % 10;
        if (remainder == 0 || remainder == r) {
            cout << shovels << endl;
            break;
        }
        shovels++;
    }
    return 0;
}