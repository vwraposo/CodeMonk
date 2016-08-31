#include <set>
#include <iostream>
#include <string>

using namespace std;

int T, N;
set <string> list;
set <string>::iterator it;
string s;

int 
main () {
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> N;
        for (int j = 0; j < N; j++) {
            cin >> s;
            list.insert (s);        
        }
        for (it = list.begin (); it != list.end (); it++) 
        cout << *it << endl;
        list.clear ();
    }
     return 0;
}
