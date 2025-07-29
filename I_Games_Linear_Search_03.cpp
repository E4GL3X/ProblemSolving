#include <iostream>

using namespace std;

int main()
{
    int a[100] , b[100];
    int tc;
    cin >> tc;
    int count = 0;

    for(int i = 0 ; i < tc ; i++){
        cin >> a[i] >> b[i];
    }

    for(int i = 0 ; i < tc ; i++){
        for(int j = 0 ; j < tc ; j++){
            if(a[i] == b[j]){
                count++;
            }
        }
    }

    cout<< count << endl;

    return 0;
}