#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    int left = 240 - b;
    int cnt = 0;
    for(int i = 1; i <= a; i++){
        left -= 5 * i;
        if(left < 0) break;
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}