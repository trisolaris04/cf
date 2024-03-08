#include <bits/stdc++.h>
using namespace std;
const int N = 3e5 + 10;

void solve() {
    int n;
    cin >> n;

    vector<int> a;
    int l = 0, r = 1 << 30;
    while(n--) {
        int op, x;
        cin >> op >> x;
        if(op == 1) {
            l = max(l, x);
        } else {
            if(op == 2)
                r = min(r, x);
            else a.push_back(x);
        }
    }

    long long ans = max(r - l + 1, 0);

    for(auto x : a)
        if(x >= l && x <= r)
            ans--;        
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