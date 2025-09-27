#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    vector<int> arr(t);
    for (int i = 0; i < t; i++)
    {
        cin >> arr[i];
    }
    int max = 0;
    sort(arr.begin(), arr.end());
    max = arr[t - 1];
    int count = 0;
    for (int i = 0; i < t; i++){
        count += max - arr[i];
    }
    cout << count << endl;
    return 0;
}