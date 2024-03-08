#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int a[200010];

void solve() {
    int n;
    cin >> n;

    int l = 0, r = 0;
    for(int i = 1; i <= n; i++)   
        cin >> a[i];

    for(int i = 1; i <= n; i++)
        if(a[i] == a[1])
            l++;
        else
            break;
    for(int i = n; i >= 1; i--)
        if(a[i] == a[n])
            r++;
        else
            break;

    if(l == n) {
        cout << 0 << '\n';
        return;
    }
    if(a[1] == a[n]) {
        cout << n - l - r << '\n';
    } else {
        cout << min(n - l, n - r) << '\n';
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