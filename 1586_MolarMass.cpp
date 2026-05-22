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
const map<char, float> atomicWeight = {
    {'C', 12.01f},
    {'H', 1.008f},
    {'O', 16.00f},
    {'N', 14.01f}
};

void solve() {
    string s; cin >> s;

    int num = 0;
    char temp = s[0];
    map<char, int> atomicCount;
    bool first = true, process = true;

    for (auto c : s) {
        if (isdigit(c)) {
            process = false;
            num = num * 10 + (c - '0');
        } else {
            if (first) {
                first = false;
                atomicCount[temp]--;
            }
            atomicCount[temp] += (num == 0 ? 1 : num);
            temp = c; 
            num = 0;
            process = true;
        }
    }

    if (process) {
        atomicCount[temp]++;
    }

    if (num) {
        atomicCount[temp] += num;
        num = 0;
    }

    float ans = 0.0f;

    for (auto &[key, val] : atomicCount) {
        ans += atomicWeight.at(key) * val; 
    }

    cout << ans << endl;
}

signed main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    cin >> tt;
    while (tt--) {
        cout << fixed << setprecision(3);
        solve();
    }
}