#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

struct b {
    string name;
    int grade;    
};

typedef struct b box;

box v[100005];
int N;

bool
compare (box x, box y) {
    if (x.grade > y.grade) return true;
    else if (x.grade < y.grade)
       return false;
    else  
        return (x.name.compare (y.name) < 0);
}

int 
main () {
    cin >> N;
    for (int i = 0; i < N; i++)
        cin >> v[i].name >> v[i].grade;
    sort (v, v+N, compare);
    for (int i = 0; i < N; i++) 
        cout << v[i].name << ' ' << v[i].grade << endl;
    return 0;
}
