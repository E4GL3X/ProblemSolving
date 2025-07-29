#include <bits/stdc++.h>

using namespace std;

int main(){

    int n , pos=0, fin=0, high=0;
    cin >> n; 
    int arr[n];

    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
        pos++;

        if (i<n-1){
            if (arr[i] < arr[i+1]){
                high = arr[i];
                fin = pos;
                if (arr[i] == high){
                    fin = pos;
                }

                }
            }
            else continue;
        }

    cout << fin << endl;
    return 0;
}