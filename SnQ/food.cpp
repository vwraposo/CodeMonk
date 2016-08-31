#include <iostream>
#include <stack>

using namespace std;

stack <int> s;

int 
main () {
    int Q, x;
    cin >> Q;
    for (int i = 0;i < Q; i++) {
        cin >> x;
        if (x == 1) {
            if (s.empty ())
                cout << "No Food" << endl;
            else {
                cout << s.top () << endl;
                s.pop ();
            }
        }
        else {
            cin >> x;
            s.push (x);
        }
    }

    return 0;
}
