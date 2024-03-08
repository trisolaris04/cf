#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int a[200010];

void solve() {
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++)
        cin >> a[i];

    int l, r;
    for(int i = 1; i <= n; i++)
        if(a[i]) {
            l = i;
            break;
        }
    for(int i = n; i >= 1; i--)
        if(a[i]) {
            r = i;
            break;
        }
    int cnt = 0;
    for(int i = l; i <= r; i++)
        if(!a[i])
            ++cnt;

    cout << cnt << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
        solve();
}