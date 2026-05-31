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

int s;
string n;

const int segments[10][7] = {
    {1, 1, 1, 0, 1, 1, 1}, 
    {0, 0, 1, 0, 0, 1, 0}, 
    {1, 0, 1, 1, 1, 0, 1}, 
    {1, 0, 1, 1, 0, 1, 1}, 
    {0, 1, 1, 1, 0, 1, 0}, 
    {1, 1, 0, 1, 0, 1, 1}, 
    {1, 1, 0, 1, 1, 1, 1}, 
    {1, 0, 1, 0, 0, 1, 0}, 
    {1, 1, 1, 1, 1, 1, 1}, 
    {1, 1, 1, 1, 0, 1, 1}  
};

void solve() {
    int rows = 2 * s + 3;
    int cols = len(n) * (s + 2) + len(n) - 1; 
 
    vector<string> grid(rows, string(cols, ' '));
    
    for (int i = 0; i < len(n); i++) {
        int d = n[i] - '0';
        int offset = i * (s + 3);
        
        if (segments[d][0]) for(int j = 1; j <= s; j++) grid[0][offset + j] = '-';

        if (segments[d][1]) for(int j = 1; j <= s; j++) grid[j][offset] = '|';

        if (segments[d][2]) for(int j = 1; j <= s; j++) grid[j][offset + s + 1] = '|';

        if (segments[d][3]) for(int j = 1; j <= s; j++) grid[s + 1][offset + j] = '-';

        if (segments[d][4]) for(int j = s + 2; j <= 2 * s + 1; j++) grid[j][offset] = '|';
        
        if (segments[d][5]) for(int j = s + 2; j <= 2 * s + 1; j++) grid[j][offset + s + 1] = '|';
        
        if (segments[d][6]) for(int j = 1; j <= s; j++) grid[2 * s + 2][offset + j] = '-';
    }       

    for (int i = 0; i < rows; i++) {
        cout << grid[i] << '\n';
    }
    cout << '\n';
}

signed main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0);

    while (cin >> s >> n && s != 0) {
        solve();
    }
    return 0;
}