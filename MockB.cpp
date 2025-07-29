#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    int maxYogurt = -1;
    int maxDistance = -1;
    int maxYogurtHouse = -1;

    for (int i = 0; i < N; ++i) {
        int yogurtQuantity;
        cin >> yogurtQuantity;

        if (yogurtQuantity > maxYogurt || (yogurtQuantity == maxYogurt && i > maxDistance)) {
            maxYogurt = yogurtQuantity;
            maxYogurtHouse = i;
            maxDistance = i;
        }
    }

    cout << maxYogurtHouse + 1 << endl; // Convert from 0-based indexing to 1-based indexing

    return 0;
}
