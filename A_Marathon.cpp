#include<bits/stdc++.h>
using namespace std; 

int main(){
    int arr[10];
    int a,b,c,d;
    int tc; cin>>tc;
    for(int i=0;i<tc;i++){
        int count=0;
        cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];
        for (int j=1;j<4;j++){
            if(arr[0]<arr[j]){
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}