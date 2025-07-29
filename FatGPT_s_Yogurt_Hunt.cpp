#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        
        cin >> arr[i];
    }

    int maxIndex = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }

    cout <<  maxIndex+1 << endl;

    return 0;
}
