#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll a[200010];

void solve() {
    int n;
    cin >> n;

    ll sum = 0;
    for(int i = 1; i <= n; i++)
        cin >> a[i], sum += a[i];

    sum /= n;
    ll cnt = 0;
    for(int i = 1; i <= n; i++) {
        if(a[i] >= sum) {
            cnt += a[i] - sum;
        } else {
            if(a[i] + cnt < sum) {
                cout << "NO\n";
                return;
            }
            cnt -= sum - a[i];
        }
    }
    if(cnt) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
        solve();
}