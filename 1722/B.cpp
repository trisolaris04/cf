#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n;
    cin >> n;

    string a, b;
    cin >> a >> b;

    for(int i = 0; i < n; i++)
        if((a[i] == 'R' && (b[i] == 'B' || b[i] == 'G')) || (b[i] == 'R' && (a[i] == 'B' || a[i] == 'G'))) {
            cout << "NO\n";
            return;
        }
    cout << "YES\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
        solve();
}
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
        solve();
}