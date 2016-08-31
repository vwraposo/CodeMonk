#include <iostream> 
#include <queue>

using namespace std;

int
main () {
    int N, M;
    long long ans = 0;
    priority_queue <int> v;
    cin >> M >> N;
    for (int i = 0; i < M; i++) {
        int x; 
        cin >> x;
        v.push (x);
    }
    for (int i = 0; i < N; i++) {
        int aux = v.top ();
        ans += aux;
        v.pop ();
        v.push (aux-1);
    }
    cout << ans << endl;

    return 0;
}
