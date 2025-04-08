#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    int flag = 0;
    cin >> tc;
    while (tc--)
    {
        char arr[10];
        cin >> arr;
        if (arr[0] == 'X' && arr[1] == '+' && arr[2] == '+' || arr[0] == '+' && arr[1] == '+' && arr[2] == 'X')
        {
            flag++;
        }
        else if (arr[0] == '-' && arr[1] == '-' && arr[2] == 'X' || arr[0] == 'X' && arr[1] == '-' && arr[2] == '-')
        {
            flag--;
        }
    }
    cout << flag << endl;
    return 0;
}