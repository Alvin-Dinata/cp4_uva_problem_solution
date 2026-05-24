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
int minute = 60;
int hour = minute * 60;

void solve() {
    vector<int> time;
    time.push_back(tt);
    int mn = tt * 2;

    int num;
    while(cin >> num, num) {
        time.push_back(num);
        mn = min(mn, num * 2);
    }

    int currTime = mn;

    for (; currTime <= 5 * hour; currTime++) {
        bool allGreen = true;
        for (auto t : time) {
            if (currTime % (2 * t) >= t - 5) {
                allGreen = false;
                break;
            }            
        }
        if (allGreen) {
            break;
        }
    }

    if (currTime > 5 * hour) {
        cout << "Signals fail to synchronise in 5 hours\n";
    } else {
        int ansHour = currTime / 3600;
        int ansMinute = currTime % 3600 / 60;
        int ansSecond = currTime % 60;
        cout << setfill('0') << setw(2) << ansHour << ":" << setw(2) << ansMinute << ":" << setw(2) << ansSecond << '\n';
    }
}

signed main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    // cin >> tt;
    while (cin >> tt) {
        if (tt == 0) {
            break;
        }
        solve();
    }
}

