#include <iostream>
#include <algorithm>

using namespace std;

int v[100005];

int bb (int be, int en, int x) {
    if (be >= en) return 0;
    int m = (be + en) / 2;
    if (x == v[m]) return 1;
    if (x > v[m]) return bb (m+1, en, x);
    return bb (be, m, x);
}

int 
main () {
    int N, Q;
    cin >> N >> Q;
    for (int i = 0; i < N; i++) 
        cin >> v[i];
    sort (v, v+N);
    for (int i = 0;i < Q; i++) {
        int x;
        cin >> x;
        if (bb (0, N, x))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    
    return 0;
}
