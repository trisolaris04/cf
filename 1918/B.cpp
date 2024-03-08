#include <bits/stdc++.h>
using namespace std;
const int N = 3e5 + 10;

int a[N], b[N];

void solve() {
    int n;
    cin >> n;

    map<int, int> mp;
    for(int i = 1; i <= n; i++)
        cin >> a[i];

    for(int i = 1; i <= n; i++)
        cin >> b[i], mp[b[i]] = a[i];

    sort(b + 1, b + n + 1, [&](int x, int y) {
        if(x > )
    })
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
        solve();
}