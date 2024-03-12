#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int ans = 0;
    for (int i = 0; i < n; i++) {
        bool ok1 = false, ok2 = false;
        if (s[i] == 'p') {
            if (i >= 2) {
                if (s[i] == 'p' && s[i - 1] == 'a' && s[i - 2] == 'm')
                    ok1 = true;
            }
            if (i < n - 2) {
                if (s[i] == 'p' && s[i + 1] == 'i' && s[i + 2] == 'e')
                    ok2 = true;
            }
            if (ok1 && ok2)
                ans++;
            else {
                if (ok1 || ok2)
                    ans++;
            }
        }
    }
    cout << ans << '\n';
}
int main() {
    int t;
    cin >> t;

    while (t--)
        solve();
}