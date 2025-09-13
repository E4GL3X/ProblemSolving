#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    int arr[tc];
    for (int i = 0; i < tc; i++)
        cin >> arr[i];
    int sum = 0;
    int count = 0;
    for (int j = 0; j < tc; j++)
    {
        if (arr[j] > 0)
        {
            sum += arr[j];
        }
        else
        {
            if (sum > 0)
            {
                sum--;
            }
            else
            {
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}
