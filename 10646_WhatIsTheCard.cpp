#include <bits/stdc++.h>
#define blank ' '
#define len(x) (int) x.size()
#define int long long
#define all(x) (x).begin(), (x).end()
#define debug(x) cerr << #x << " = " << (x) << std::endl
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<ii> vii;

int tt = 1;
int idx = 1;

void solve() {
    vs pile(27);
    vs hand(25);

    for (auto &s : pile) {
        cin >> s;
    }

    for (auto &s : hand) {
        cin >> s;
    }

    int y = 0;

    for (int i = 0; i < 3; i++) {
        if (!pile.size()) {
            break;
        }
        char card = pile[len(pile) - 1][0];
        int num;

        if (isdigit(card)) {
            num = card - '0';
        } else {
            num = 10;
        }
        if (len(pile)) {
            pile.pop_back();
        }

        y += num;

        for (int j = 0; j < 10 - num; j++) {
            if (len(pile)) {
                pile.pop_back();
            }
        }
    }

    for (auto &s : hand) {
        pile.push_back(s);
    }

    y %= len(pile);
    cout << pile[y - 1] << endl;
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