#include <bits/stdc++.h>

using namespace std;
int main(){
    int tc, sum;
    cin >> tc;

    while (tc--){
        int n;
        int high = -1000000000;
        int res = -1000000000;
        cin >> n;

        while(n--){
            cin >> sum; 

            if (high - sum > res){
                res = high - sum;
            }
            if (sum > high){
                high = sum;
            }
            cout << res << endl;
        
        }
            return 0;

    }

}
