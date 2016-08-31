#include <iostream>
#include <set>

using namespace std;

int 
main () {
    int T, N, M;
    set <long long> s;
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> N >> M;
        for (int j = 0; j < N; j++) {
            long long x;
            cin >> x;
            s.insert (x);
        }
        for (int j = 0; j < M; j++) {
            long long x;
            cin >> x;
            if (s.find (x) == s.end ()) {
                cout << "NO" << endl;
                s.insert (x);
            }
            else 
                cout << "YES" << endl;
        }
        s.clear ();
    }
    return 0;
}
