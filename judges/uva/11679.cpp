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
typedef vector<vi> v2i;
typedef vector<vi2> v2i2;
typedef vector<string> vs;
typedef vector<ll> vll;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int b, n;

    while (cin >> b >> n && b | n) {
        vi banks(b);
        for (int i = 0; i < b; ++i) cin >> banks[i];
        for (int i = 0; i < n; ++i) {
            int x, y, z; cin >> x >> y >> z;
            banks[x - 1] -= z;
            banks[y - 1] += z;
        }
        bool good = true;
        for (int i = 0; i < b; ++i) {
            if (banks[i] < 0) {
                good = false;
                break;
            }
        }

        cout << (good ? "S" : "N") << endl;
    }

    return 0;
}