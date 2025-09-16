#include <bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    string s;
    cin >> tc;
    for(int t = 0; t < tc; t++){
        cin >> s;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        if(s == "yes") cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}