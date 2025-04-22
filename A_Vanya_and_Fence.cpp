#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b, ans=0, h[1000];
    cin >> a >> b;

    for(int i = 0; i < a; i++){
        cin >> h[i];
        if(h[i] > b){
            ans+=2;
        } else {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}