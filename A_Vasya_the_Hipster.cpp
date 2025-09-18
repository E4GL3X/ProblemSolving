#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    int ans = 0;
    int min;
    a > b ? ans = a - b : ans = b - a;
    a > b ? min = b : min = a;
    ans = ans / 2;
    cout << min << " " << ans << endl;
  
    return 0;
}