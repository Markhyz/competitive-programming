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
    int n, t = 0;
    
    while (cin >> n && n) {
        int a = 0, b = 0;
        for (int i = 0; i < n; ++i) {
            int x; cin >> x;
            if (x) ++b;
            else ++a;
        }
        
        cout << "Case " << ++t << ": " << b - a << endl;
    }

    return 0;
}
