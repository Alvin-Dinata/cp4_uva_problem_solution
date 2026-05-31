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
int n, b;
void solve() {
    vi arr(n);

    int g = 0;
    for (int &num : arr) {
        cin >> num;
        g = __gcd(g, num);
    }
    
}

signed main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    // cin >> tt;
    while (cin >> n >> b) {
        if (n == -1 && b == -1) {
            break;
        }
        solve();
    }
}