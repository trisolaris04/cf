#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n;
    ll cur;
    cin >> n;

    vector<ll> a(n);   
    for(int i = 0; i < n; i++)
        cin >> a[i];

    cur = a[0];
    for(int i = 1; i < n; i++) {
        cur = (cur / a[i] + 1) * a[i];
    }

    cout << cur << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
        solve();
}