#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,n,a,max,min;
    cin >> tc;
    while(tc--)
    {
        max=0,min=100;
        cin >> n;
        while(n--)
        {
            cin >> a;
            if(a>max) max=a;
            if(a<min) min=a;
        }
        cout << (max-min)*2 << endl;
    }
    return 0;
}