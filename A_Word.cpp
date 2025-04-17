#include<bits/stdc++.h>
using namespace std;

int main(){
    char s[1000];
    cin >> s;
    int n = strlen(s);
    int up = 0, low = 0;

    for (int i = 0; i < n; i++){
        if (s[i] >= 65 && s[i] <= 90){
            up++;
        } else if (s[i] >= 97 && s[i] <= 122){
            low++;
        }
    }
    if (up > low){
        for (int i = 0; i < n; i++){
            s[i] = toupper(s[i]);
        }
    } else {
        for (int i = 0; i < n; i++){
            s[i] = tolower(s[i]);
        }
    }
    cout << s << endl;
}