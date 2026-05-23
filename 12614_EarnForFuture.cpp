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
    int n; cin >> n;
    int ans = 0;
    for (int num; n--;) {
        cin >> num;
        ans = max(ans, num);
    }
    cout << ans << endl;
}

signed main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    cin >> tt;
    while (tt--) {
        cout << "Case " << idx++ << ": ";
        solve();
    }
}