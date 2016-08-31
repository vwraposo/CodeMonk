#include <iostream>

using namespace std;

int
main () {
    int N, sum = 0, x;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> x;
        sum += x;
    }
    if (sum / 2 == N-1) 
        cout << "Yes" << endl;
    else 
        cout << "No" << endl;

    return 0;
}
