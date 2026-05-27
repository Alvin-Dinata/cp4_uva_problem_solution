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
typedef unsigned long long ull;

int tt = 1;
int idx = 1;
int b, v;

ull binerToDecimal (string biner) {
    ull res = 0;
    int idx = 0;
    for (int i = len(biner) - 1; i >= 0; i--) {
        if (biner[i] == '1') {
            res += (1ULL << idx);
        }
        idx++;
    }
    return res;
}

void solve() {
    vector<pair<string, int>> arr(v);

    for (int i = 0; i < v; i++) {
        cin >> arr[i].first >> arr[i].second;
    }

    map<string, ull> mp;
    
    for (int i = 0; i < v; i++) {
        string in = "";
        for (int j = 0; j < arr[i].second; j++) {
            string temp; cin >> temp;
            in += temp;
        }
        mp[arr[i].first] = binerToDecimal(in);
    }

    int q; cin >> q;

    for (int i = 0; i < q; i++) {
        string s; cin >> s;
        cout << s << "=";
        if (mp.find(s) != mp.end()) {
            cout << mp[s];
        }
        cout << endl;
    }
}

signed main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    // cin >> tt;
    while (cin >> b >> v) {
        solve();
    }
}