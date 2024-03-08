#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    vector<pair<int, int>> a(4);
    for(int i = 0; i < 4; i++)
        cin >> a[i].first >> a[i].second;

    sort(a.begin(), a.end());

    cout << max(a[1].first - a[0].first, a[1].second - a[0].second) * max(a[3].first - a[2].first, a[3].second - a[2].second) << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
        solve();
}