#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ll k, x, a;
    cin >> k >> x >> a;

    ll sum = 0;
    for(int i = 0; i <= x; i++) {
        sum += sum / (k - 1) + 1;
        if(sum > a) {
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
    
    while (t--) {
        solve();
    }
    
    return 0;
}