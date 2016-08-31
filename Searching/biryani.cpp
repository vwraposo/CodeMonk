#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

int A[100005], B[100005];

int 
bb (int x, int i, int j) {
    if (i >= j) return j;
    int m = (i + j) / 2;
    if (x == B[m]) return m;
    if (x < m) 
       return bb (x, m+1, j);
    else
        return bb (x, i, m);
}
int
M (int i, int j) {
    if (B[j] >= A[i]) return j - i;
    return 0; 
}

int 
main () {
    int T, N;
    cin >> T;
    for (int l = 0; l < T; l++) {
        cin >> N;
        int ans = INT_MIN;
        for (int i = 0; i < N; i++)
            cin >> A[i];
        for (int i = 0; i < N; i++)
            cin >> B[i];
        for (int i = 0; i < N; i++) {
                int j = bb (A[i], 0, N);
                if (j < N) {
                    if (B[j] > A[i]) j++;
                    int aux = M (i, j);
                    ans = max (ans, aux);
                }
        }
        cout << ans << endl;
    }

    return 0;
}
