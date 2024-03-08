#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll a[200010];

void solve() {
    int n, q;
    cin >> n >> q;

    a[0] = 0;
    for(int i = 1; i <= n; i++) {
        int x;
        cin >> x;    
        a[i] = a[i - 1] + x;
    }

    sort(a + 1, a + n + 1);

    // for(int i = 1; i <= n; i++)
    //     cout << a[i] << " \n"[i == n];
    while(q--) {
        ll k;
        cin >> k;
        cout << lower_bound(a + 1, a + n + 1, k) - (a + 1) << " ";
    }
    cout << "\n";
}
int main() {
    int t;
    cin >> t;

    while(t--)
        solve();
}