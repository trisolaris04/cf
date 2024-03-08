#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ll n, a, b;
    ll f;
    cin >> n >> f >> a >> b;

    vector<ll> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];
    
    long double sum = 0;
    for(int i = 0; i < n; i++) {
        if(i)
            sum += min(b, (v[i] - v[i - 1]) * a);
        else
            sum += min(b, (v[i]) * a);
        if(sum >= f) {
            cout << "NO\n";
            return;
        }
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