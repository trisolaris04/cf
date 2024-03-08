#include <bits/stdc++.h>
using namespace std;

long long cal(long long n, long long m) {
    if(n < m) return 0;
    long long ans = 1;
    for(int i = 1; i <= m; i++)
        ans = ans * (n - m + i) / i;
    return ans;
}

void solve() {
    int n;
    cin >> n;

    vector<long long> a(n);
    map<long long, long long> mp;

    for(int i = 0; i < n; i++)
        cin >> a[i], mp[a[i]]++;

    sort(a.begin(), a.end());
    a.erase(unique(a.begin(), a.end()), a.end());

    long long ans = cal(mp[a[0]], 3), cnt = 0;
    for(int i = 1; i < a.size(); i++) {
        cnt += mp[a[i - 1]];
        ans += cal(mp[a[i]], 3) + cal(mp[a[i]], 2) * cnt;
    }

    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
        solve();
}