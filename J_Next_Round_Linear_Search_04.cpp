#include<bits/stdc++.h>

using namespace std;
int main(){

    int tc, k, newcount=0;
    int arr[50];
    cin >> tc >> k;

    for (int i=0 ; i<tc; i++){
        cin >> arr[i];
    }

    for (int j=0 ; j<tc ; j++){
        if (arr[j]>= arr[k-1] && arr[j]>0){
            newcount++;
        }
    }

    cout << newcount <<endl;

    return 0;
}