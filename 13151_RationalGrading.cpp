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
string val;
int t;

void solve() {
    int num = stoll(val, nullptr, 0);

    int correct = 0;

    for (int i = 0; i < t; i++) {
        string command; cin >> command;
        int print; cin >> print;

        if (command == "++i") {
            if (num + 1 == print) correct++;
            num = print;
        } else if (command == "--i") {
            if (num - 1 == print) correct++;
            num = print;
        } else if (command == "i++") {
            if (num == print) correct++;
            num = print + 1;
        } else if (command == "i--") {
            if (num == print) correct++;
            num = print - 1;
        } else if (command == "i") {
            if (num == print) correct++;
            num = print;
        }
    }

    cout << correct << endl;
}

signed main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    // cin >> tt;
    while (cin >> val >> t) {
        if (val == "0" && t == 0) break;
        solve();
    }
}