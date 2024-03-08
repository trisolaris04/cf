#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 3e5 + 10;

void solve() {
    int n;
    cin >> n;

    ll res = 0;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        res += x;
    }

    if(res == (ll)sqrt(res) * (ll)sqrt(res))
        cout << "YES\n";
    else
        cout << "NO\n";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
        solve();
}