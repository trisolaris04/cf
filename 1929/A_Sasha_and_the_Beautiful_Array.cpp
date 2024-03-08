#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());

    long long ans = 0;
    for(int i = 1; i < n; i++)
        ans += a[i] - a[i - 1];

    printf("%lld\n", ans);
}
int main() {
    int t;
    cin >> t;

    while(t--)
        solve();
}