/**
 * Author: E4GL3
 * GitHub : https://github.com/e4GL3X/
 * Created: 2025-09-29
 * 
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int y, w;
    cin >> y >> w;

    int m = max(y, w);  
    int num = 6 - m + 1; 
    int den = 6;         

    if (num == 6) cout << "1/1\n";
    else if (num == 5) cout << "5/6\n";
    else if (num == 4) cout << "2/3\n";
    else if (num == 3) cout << "1/2\n";
    else if (num == 2) cout << "1/3\n";
    else cout << "1/6\n";

    return 0;
}

