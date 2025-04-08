#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int a,b,c,tc;
    int flag=0;
    cin >> tc;

    for(int i=0; i<tc; i++){
        cin >> a >> b >> c;
        if(a+b+c >= 2){
            flag++;
        }
    }
    cout << flag << endl;
}