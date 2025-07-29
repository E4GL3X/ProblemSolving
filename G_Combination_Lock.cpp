#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, count = 0;
    string x , y;

    cin >> n >> x >> y;

    for (int i = 0 ; i < n ; i++){

        count = count + min(10 - abs(x[i] - y[i]) , abs(x[i] - y[i]));
    }

    cout << count << endl;

    return 0;
}