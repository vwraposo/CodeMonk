#include <iostream>
#include <queue>

using namespace std;

queue <int> q;
int N, id[105], idx = 0, t = 0;

void 
next () {
    while (q.front () != id[idx]) {
        int x = q.front ();
        q.pop ();
        q.push (x);
        t++;
    }    
}

void 
remove () {
    idx++;
    q.pop ();
    t++;
}

int
main () {
    cin >> N;
    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;
        q.push (x);
    }
    for (int i = 0; i < N; i++)
        cin >> id[i];
    while (!q.empty ()) {
        next ();
        remove ();
    }
    cout << t << endl;

    return 0;
}
