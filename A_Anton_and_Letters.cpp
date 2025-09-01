#include <iostream>
#include <set>
using namespace std;

int main() {
    string s;
    getline(cin, s); 

    set<char> l; 

    for (char c : s) {
        if (c >= 'a' && c <= 'z') { 
            l.insert(c);
        }
    }

    cout << l.size() << endl;
    return 0;
}
