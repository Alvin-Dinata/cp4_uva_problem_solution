#include <bits/stdc++.h>
#define blank ' '
#define len(x) (int) x.size()
#define int long long
#define all(x) (x).begin(), (x).end()
#define debug(x) cerr << #x << " = " << (x) << endl
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<ii> vii;

int tt = 1;
int idx = 1;
int a, b, c, x, y;

void solve() {
    int mx = max({a, b, c});
    int mn = min({a, b, c});
    int md = a + b + c - mx - mn;

    if (mx > max({x, y}) && md > min({x, y})) {
        cout << -1 << endl;
        return;
    }
    int start;

    if (x > mx && y > mx) {
        start = 1;
    } else if (min({x, y}) > md) {
        start = md + 1;
    } else {
        start = mx + 1;
    }

    for (int i = start; i <= 52; i++) {
        if (i == mx || i == mn || i == md || i == x || i == y) continue;
        cout << i << endl;
        return;
    }
    cout << -1 << endl;
}

signed main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    // cin >> tt;
    while (cin >> a >> b >> c >> x >> y) {
        if (a == 0) break;
        solve();
    }
}