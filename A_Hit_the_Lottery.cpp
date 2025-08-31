#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, min = 0;
    int arr[] = {100, 20, 10, 5, 1};
    cin >> n;
    for (int i = 0; i < 5; i++)
    {
        min += n / arr[i];
        n = n % arr[i];
    }
    cout << min << endl;
}