#include <iostream>
#include <map>

using namespace std;

int 
main () {
    ios::sync_with_stdio (false);
    int Q;
    map <int, int> m;
    map <int, int>::iterator it;
    map <int, int>::reverse_iterator rit;
    cin >> Q;
    for (int i = 0; i < Q; i++) {
        int c, x;
        cin >> c;
        if (c == 1) {
            cin >> x;
            if (m.find (x) == m.end ())
                m[x] = 1;
            else 
                m[x]++;
        }
        else if (c == 2) {
            cin >> x;
            if (m.find (x) == m.end())
                cout << -1 << endl;
            else {
                m[x]--;
                if (m[x] == 0) m.erase (x);
            }
        }
        else if (c == 3) {
            if (m.empty ())
                cout << -1 << endl;
            else {
                rit = m.rbegin ();
                int aux = rit->first;
                cout << aux << endl;
            }
        }
        else if (c == 4) {
            if (m.empty ())
                cout << -1 << endl;
            else {
                it = m.begin ();
                int aux = it->first;
                cout << aux << endl;
            }
        }
    }
    return 0;
}
