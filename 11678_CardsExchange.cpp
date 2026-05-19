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
int a, b;

void solve() {
    set<int> alice, bob;
    map<int, bool> aliceHand, bobHand;
    for (int num; a--; ) {
        cin >> num;
        alice.insert(num);
        aliceHand[num] = 1;
    }

    for (int num; b--;) {
        cin >> num;
        bob.insert(num);
        bobHand[num] = 1;
    }

    int cntUniqueAlice = 0, cntUniqueBob = 0;
    
    for (auto num : alice) {
        cntUniqueAlice += (bobHand.find(num) == bobHand.end() ? 1 : 0);
    }

    for (auto num : bob) {
        cntUniqueBob += (aliceHand.find(num) == aliceHand.end() ? 1 : 0);
    } 

    cout << min(cntUniqueAlice, cntUniqueBob) << endl;
}

signed main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    // cin >> tt;
    while (cin >> a >> b) {
        if (a == 0 && b == 0) break;
        solve();
    }
}