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
    deque<char> janeDown, janeUp, johnDown, johnUp;
    string s; 
    
    cin >> s;
    for (auto c : s) {
        janeDown.push_back(c);
    }

    cin >> s;
    for (auto c : s) {
        johnDown.push_back(c);
    }

    for (int i = 0; i < 1000; i++) {
        janeUp.push_front(janeDown.front());
        johnUp.push_front(johnDown.front());
        janeDown.pop_front();
        johnDown.pop_front();

        if (janeUp.front() == johnUp.front()) {
            bool janeTurn = !(random() / 141 % 2);
            cout << "Snap! for ";

            if (janeTurn) {
                cout << "Jane: ";

                while (!johnUp.empty()) {
                    janeUp.push_front(johnUp.back());
                    johnUp.pop_back();
                }

                for (auto c : janeUp) {
                    cout << c;
                }
                cout << endl;
            } else {
                cout << "John: ";

                while (!janeUp.empty()) {
                    johnUp.push_front(janeUp.back());
                    janeUp.pop_back();
                }

                for (auto c : johnUp) {
                    cout << c;
                }
                cout << endl;
            }
        } 
        if (janeDown.empty() && janeUp.empty()) {
            cout << "John wins.\n";
            return;
        }

        if (johnDown.empty() && johnUp.empty()) {
            cout << "Jane wins.\n";
            return;
        }

        if (janeDown.empty()) {
            while (!janeUp.empty()) {
                janeDown.push_front(janeUp.front());
                janeUp.pop_front();
            }
        }

        if (johnDown.empty()) {
            while (!johnUp.empty()) {
                johnDown.push_front(johnUp.front());
                johnUp.pop_front();
            }
        }
    }

    cout << "Keeps going and going ...\n";
}

signed main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    cin >> tt;
    while (tt--) {
        if (idx++ > 1) cout << endl;
        solve();
    }
}