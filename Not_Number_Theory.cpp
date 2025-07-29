#include <iostream>
#include <string>
#include <vector>
#include <bitset>
#include <algorithm>

using namespace std;

int countSetBits(int num) {
    return __builtin_popcount(num); 
}

int getMaxSetBitsNumber(string s) {
    int maxSetBits = -1;
    int bestNumber = -1;

    for (char d1 = '0'; d1 <= '9'; d1++) {
        string temp = s;
        for (int i = 0; i < temp.size(); i++) {
            if (temp[i] == '?') {
                temp[i] = d1;
            }
        }
        int num = stoi(temp); 
        int setBits = countSetBits(num);

        if (setBits > maxSetBits || (setBits == maxSetBits && num > bestNumber)) {
            maxSetBits = setBits;
            bestNumber = num;
        }
    }

    return bestNumber;
}

int main() {
    int T;
    cin >> T;
    vector<string> testCases(T);

    for (int i = 0; i < T; i++) {
        cin >> testCases[i];
    }

    for (int i = 0; i < T; i++) {
        cout << getMaxSetBitsNumber(testCases[i]) << endl;
    }

    return 0;
}
