#include<bits/stdc++.h>

using namespace std;
int main(){

    int n,q;
    cin >> n; 
    unsigned arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> q;
    
    while (q--)
    {
        int height;
        cin >> height;
        
        unsigned int * above = upper_bound(arr, arr + n, height);
        unsigned int * below = above; --below;
        while (below >= arr && *below >= height)
           --below;
       
        if (below >= arr)
            cout << *below << ' ';
        else
            cout << "X ";
       
        if (above == arr + n)
            cout << "X\n";
        else
            cout << *above << '\n';
    }
    
}