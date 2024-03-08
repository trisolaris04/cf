#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n, k;
    cin >> n >> k;

    ll res = 1;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        res *= x;
    }

    if((1LL * 2023) % res == 0) {
        cout << "YES\n";
        for(int i = 0; i < k - 1; i++)
            cout << 1 << " ";
        cout << 2023 / res << "\n";
    } else cout << "NO\n";
}
int main() {
    int t;
    cin >> t;

    while(t--)
        solve();
}