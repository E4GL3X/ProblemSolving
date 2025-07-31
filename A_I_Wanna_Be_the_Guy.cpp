#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    set<int> levels;
    
    int p;
    cin >> p;
    for (int i = 0; i < p; i++) {
        int x;
        cin >> x;
        levels.insert(x);
    }
    
    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int y;
        cin >> y;
        levels.insert(y);
    }
    
    cout << (levels.size() == n ? "I become the guy." : "Oh, my keyboard!") << endl;
    return 0;
}