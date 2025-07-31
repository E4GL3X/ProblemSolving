#include<bits/stdc++.h>
using namespace std;

string pangram(int n, const string s){
    set<char> letters;
    for (int i = 0; i < n; i++) {
        if (isalpha(s[i])) {
            letters.insert(tolower(s[i]));
        }
    }
    return letters.size() == 26 ? "YES" : "NO";
}

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    cout << pangram(n, s) << endl;
    return 0;
}