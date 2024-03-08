#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll a[200010], b[200010], s[200010];

void solve() {
    int n, m;
    cin >> n >> m;

    for(int i = 1; i <= n; i++)
        cin >> a[i];
    for(int i = 1; i <= m; i++)
        cin >> b[i];

    sort(a + 1, a + n + 1), sort(b + 1, b + m + 1);

    ll ans = 0;
    for(int i = 1; i <= n; i++)
        ans += max(abs(a[i] - b[m - i + 1]), abs(a[i] - b[n - i + 1]));

    printf("%lld\n", ans);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
        solve();
}