#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    vector<int> a(t);
    for (int i = 0; i < t; i++)
    {
        cin >> a[i];
    }

    int seq[1000];
    int cal = 0;
    for (int i = 1; cal < 1000; i++)
    {
        if (i % 3 != 0 && i % 10 != 3)
        {
            seq[cal] = i;
            cal++;
        }
    }

    for (int i = 0; i < t; i++)
    {
        cout << seq[a[i] - 1] << endl;
    }
    return 0;
}
