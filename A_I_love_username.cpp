#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc; cin >> tc;
    int arr[tc];
    for (int i = 0; i < tc; i++) cin >> arr[i];

    int low = arr[0];
    int high = arr[0];
    int count = 0;

    for (int j = 1; j < tc; j++) {
        if (arr[j] < low) {
            low = arr[j];
            count++;
        } 
        else if (arr[j] > high) {
            high = arr[j];
            count++;
        }
    }

    cout << count << endl;
    return 0;
}
