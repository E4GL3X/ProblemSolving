#include <iostream>
using namespace std;

bool check(int M, int Q, int R, int eM, int eQ, int eR) {
    return (M == eM && Q == eQ && R == eR);
}

int main() {
    int T; 
    cin >> T;
    
    while (T--) {
        int N;  
        cin >> N;
        
        bool consistent = true;

        for (int i = 0; i < N; i++) {
            int M, Q, R;

            for (int j = 0; j < 2; j++) {
                cin >> M >> Q >> R;
                if (!check(M, Q, R, 1, 3, 10)) consistent = false;
            }

            for (int j = 0; j < 2; j++) {
                cin >> M >> Q >> R;
                if (!check(M, Q, R, 1, 3, 10)) consistent = false;
            }

            for (int j = 0; j < 2; j++) {
                cin >> M >> Q >> R;
                if (!check(M, Q, R, 1, 3, 10)) consistent = false;
            }

            cin >> M >> Q >> R;
            if (!check(M, Q, R, 1, 3, 10)) consistent = false;

            for (int j = 0; j < 3; j++) {
                cin >> M >> Q >> R;
                if (!check(M, Q, R, 1, 3, 10)) consistent = false;
            }
        }

        if (consistent) {
            cout << "Consistent" << endl;
        } else {
            cout << "Inconsistent" << endl;
        }
    }
    
    return 0;
}
