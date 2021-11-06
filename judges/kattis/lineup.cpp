#include <bits/stdc++.h>

using namespace std;

#define SHIFTL(x, y) ((x) << (y))
#define SHIFTR(x, y) ((x) >> (y))

#define BIT(x) (1LL << (x))

typedef long long ll;
typedef unsigned long long ull;
typedef tuple<int, int> i2;
typedef tuple<int, int, int> i3;
typedef tuple<int, int, int, int> i4;
typedef vector<int> vi;
typedef vector<i2> vi2;
typedef vector<i3> vi3;
typedef vector<vi2> v2i2;
typedef vector<string> vs;
typedef vector<ll> vll;
typedef vector<double> vd;

int main() {
    int n; cin >> n;
    
    vs v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    int order = v[0] < v[1] ? 1 : -1;
    bool good = true;
    for (int i = 2; i < n; ++i) {
        if (v[i] > v[i - 1] && order == -1) {
            good = false;
            break;
        }
        if (v[i] < v[i - 1] && order == 1) {
            good = false;
            break;
        }
    }

    if (!good) cout << "NEITHER" << endl;
    else if (order == 1) cout << "INCREASING" << endl;
    else cout << "DECREASING" << endl;

    return 0;
}
