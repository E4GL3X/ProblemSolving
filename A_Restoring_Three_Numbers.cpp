#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[100];
    for (int i=0 ; i < 4 ; i++){
        cin >> arr[i];
    }
    sort(arr,arr+4);

    for (int j=0 ; j < 3 ; j++){
        cout << arr[3]-arr[j] << " ";
    }
    cout << endl;

    return 0;
}