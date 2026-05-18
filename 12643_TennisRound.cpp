#include <bits/stdc++.h>
#define blank ' '
#define len(x) (int) x.size()
#define int long long
#define all(x) (x).begin(), (x).end()
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<ii> vii;

int tt = 1;
int idx = 1;
int n, a, b;

void solve() {
    int cnt = 0;

    while (a != b) {
        a = ceil(a / 2.0);
        b = ceil(b / 2.0);
        cnt++;
    }
    cout << cnt << endl;
}

signed main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    // cin >> tt;
    while (cin >> n >> a >> b) {
        // cout << "Case " << idx++ << ": ";
        solve();
    }
}