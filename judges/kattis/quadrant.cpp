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

int main() {
    int x, y; cin >> x >> y;

    int res;

    if (x > 0) {
        if (y > 0) res = 1;
        else res = 4;
    } else {
        if (y > 0) res = 2;
        else res = 3;
    }

    cout << res << endl;

    return 0;
}