#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;
        int first = n/10;
        int second = n%10;
        cout << first + second << endl;
    }
}