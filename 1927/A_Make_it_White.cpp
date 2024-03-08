#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int l, r;
    for(int i = 0; i < n; i++) {
        if (s[i] == 'B') {
            l = i;
            break;
        }
    }

    for(int i = n - 1; i >= 0; i--) {
        if (s[i] == 'B') {
            r = i;
            break;
        }
    }
    cout << r - l + 1 << '\n';
}

int main() {
    int t;
    cin >> t;

    while(t--)
        solve();
}