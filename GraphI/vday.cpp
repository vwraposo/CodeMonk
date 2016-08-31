#include <iostream>

using namespace std;

int N, D, v[1004], ans = 1;

int 
main () {
    cin >> N >> D;
    for (int i = 0; i < D; i++) {
        int x, y;
        cin >> x >> y;
        v[y] = x;
    }
    for (int i = 0; i < N; i++)  
        if (v[i] != 0 && i != v[v[i]]) ans++;
    cout << ans << endl;

    return 0; 
}
