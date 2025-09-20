#include <bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    int num;
    cin >> tc;
    while(tc--){
        cin >> num;
        if(num <= 1399){
            cout << "Division 4" << endl;
        }
        else if(num >= 1400 && num <= 1599){
            cout << "Division 3" << endl;
        }
        else if(num >= 1600 && num <= 1899){
            cout << "Division 2" << endl;
        }
        else{
            cout << "Division 1" << endl;
        }
    }
}