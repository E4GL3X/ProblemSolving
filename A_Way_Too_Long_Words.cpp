#include<bits/stdc++.h>
#include<string.h>
 
using namespace std;
int main(){
    int tc;
    string sen;
    cin >> tc;
    for (int i=0 ; i<tc ; i++){
 
        cin >> sen;
        if (sen.length() > 10){
 
            cout << sen[0] << sen.length()-2 << sen[sen.length()-1] << endl;
        }
 
        else {
            cout << sen << endl; 
        }
    }
    return 0;
 
}