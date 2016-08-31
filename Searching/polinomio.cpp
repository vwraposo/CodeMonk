#include <iostream>

using namespace std;

int A, B, C, K;

int 
main () 
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> A >> B >> C >> K;
        for (int j = 0; ; j++)
            if (A*j*j + B*j + C >= K) {
                cout << j << endl;
                break;
            }
    }
    return 0;
}
