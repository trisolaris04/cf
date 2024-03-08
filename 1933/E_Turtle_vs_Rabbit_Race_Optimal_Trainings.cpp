#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll calc(int x, int u) {
    return (ll)(u + u - x + 1) * x / 2;
}

void solve() {
    int n;
    cin >> n;

    vector<int> a(n), s(n + 1);
    for(int i = 0; i < n; i++)
        cin >> a[i];

    s[0] = a[0];
    for(int i = 0; i < n; i++)
        s[i + 1] = s[i] + a[i];

    int q;
    cin >> q;

    while(q--) {
        int l, u, r = -1;
        cin >> l >> u;
        ll ans = -0x3f3f3f3f;
        l--;
        int j = lower_bound(s.begin() + l + 1, s.end(), s[l] + u) - s.begin();
        if(j <= n)
            if(calc(s[j] - s[l], u) > ans)
                ans = max(ans, calc(s[j] - s[l], u)), r = j;

        if(j - 1 > l)
            if(calc(s[j - 1] - s[l], u) >= ans)
                r = j - 1;
        
        cout << r << " ";
    }
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
        solve();
}