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
    int k, n; cin >> k >> n;

    int res = 0, total = 0;
    for (int i = 0; i < n; ++i) {
        string s; cin >> s;
        int x; cin >> x;
        if (s == "enter") {
            if (x + total > k) ++res;
            else total += x;
        } else {
            total -= x;
        }
    }

    cout << res << endl;

    return 0;
}
