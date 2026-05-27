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

string tt;
const string NOTES[12] = {"C", "C#", "D", "D#", "E", "F", "F#", "G", "G#", "A", "A#", "B"};
const int TONES[] = {2, 2, 1, 2, 2, 2, 1}; 
vi scaleMasks(12);

int getNoteIndex(string note) {
    for (int i = 0; i < 12; i++) {
        if (NOTES[i] == note) return i;
    }
    return -1; 
}

void precompute() {
    for (int i = 0; i < 12; i++) {
        int mask = 0;
        int current_idx = i;

        mask |= (1 << current_idx); 
        for (int step = 0; step < 6; step++) {
            current_idx = (current_idx + TONES[step]) % 12;
            mask |= (1 << current_idx);
        }
        scaleMasks[i] = mask;
    }
}

void solve() {
    int inputMask = 0;
    stringstream ss(tt);
    string note;

    while(ss >> note) {
        inputMask |= (1 << getNoteIndex(note));
    }

    bool first = true;
    for (int i = 0; i < 12; i++) {
        if ((scaleMasks[i] & inputMask) == inputMask) {
            if (!first) cout << " ";
            cout << NOTES[i];
            first = false;
        }
    }
    cout << '\n';
}

signed main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    // cin >> tt;
    precompute();
    while (getline(cin, tt)) {
        if (tt == "END") break;
        solve();
    }
}