#include <bits/stdc++.h>

using namespace std;

int main() {
	int tc, n, num = 0;
	cin >> tc;
	while(tc--) {
		cin >> n; 
		int high = 0, c;
		while(n--) {
			cin >> c;
			if(high < c)
				high = c;
		}
        cout << "Case " << ++num << ": " << high <<endl; 
	}
    return 0;
}