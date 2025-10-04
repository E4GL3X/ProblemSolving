/**
 * Author: E4GL3
 * GitHub : https://github.com/e4GL3X/
 * Created: 2025-10-04
 * 
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int nextPrime = n + 1;
    while (true) {
        bool prime = true;
        if (nextPrime < 2) prime = false;
        for (int i = 2; i * i <= nextPrime; i++) {
            if (nextPrime % i == 0) {
                prime = false;
                break;
            }
        }
        if (prime) break;
        nextPrime++;
    }

    if (nextPrime == m)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
