#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

int T, N, K;
long long ans;
map <long long, int> v;
map <long long, int>::reverse_iterator rit;

int 
main () {
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> N >> K;
        ans = 0;
        for (int j = 0; j < N; j++) {
            long long x;
            cin >> x;
            if (v.find (x) != v.end ())
                v[x]++;
            else 
                v[x] = 1;
        }
        for (int j = 0; j < K; j++) {
            rit = v.rbegin ();
            long long aux = rit->first;
            ans += aux;
            v[aux]--;
            if (v[aux] == 0) 
                v.erase (aux);
            if (v.find (aux / 2) != v.end ())
                v[aux/2]++;
            else 
                v[aux/2] = 1;
        }
        cout << ans << endl;
        v.clear ();
    }

    return 0;
}
