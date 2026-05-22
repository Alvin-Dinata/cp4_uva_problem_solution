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

void solve() {
    int a = 1, b = (tt + 3) / 4 * 4;
    int sheet = 0;

    for (; a < b && a <= tt; ) {
        cout  << "Sheet " << sheet + 1;
        if (a & 1) {
            cout << ", front: " << (tt >= b ? to_string(b) : "Blank") << ", " << a++ << '\n';
        } else {
            cout << ", back : " << a++ << ", " << (tt >= b ? to_string(b) : "Blank") << '\n';
        }
        b--;
        if (a & 1) sheet++;
    }
}

signed main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    // cin >> tt;
    while (cin >> tt) {
        if (tt == 0) break;
        cout << "Printing order for " << tt << " pages:\n";
        solve();
    }
}