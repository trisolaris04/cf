#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int a[200010], b[200010];
ll c[200010];

void solve() {
    int n, q;
    cin >> n >> q;

    for(int i = 1; i <= n; i++)
        cin >> a[i];

    for(int i = 1; i <= n; i++)
        c[i] = c[i - 1] + a[i];

    for(int i = 1; i <= n; i++) {
        if(a[i] == 1)
            b[i] = b[i - 1] + 1;
        else
            b[i] = b[i - 1];
    }
    while(q--) {
        int l, r;
        cin >> l >> r;
        if(r == l) {
            cout << "NO\n";
            continue;
        }
        ll sum = c[r] - c[l - 1];
        sum -= r - l + 1;
        int cnt = b[r] - b[l - 1];
        if(sum >= cnt) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}
int main() {
    int t;
    cin >> t;

    while(t--)
        solve();
}