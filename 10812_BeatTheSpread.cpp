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
    int s, d; cin >> s >> d;
  
    if ((s + d) & 1 || d > s) {
        cout << "impossible\n";
        return;
    }

    int a = s + (d - s) / 2;

    cout << max(a, s - a) << ' ' << min(a, s - a) << '\n';
}

signed main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    cin >> tt;
    while (tt--) {
        solve();
    }
}