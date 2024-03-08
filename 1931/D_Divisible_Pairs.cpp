#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n, x, y;
    cin >> n >> x >> y;

    vector<int> a(n), b(n);
    map<int, vector<int>> mp;
    for(int i = 0; i < n; i++) {        
        cin >> a[i];
        b[i] = a[i] % x;
        mp[a[i] % x].push_back(a[i] % y);
    }

    sort(b.begin(), b.end());
    b.erase(unique(b.begin(), b.end()), b.end());

    int ans = 0;
    for(int i = 0; i < b.size(); i++)
        for(int j = 0; j < mp[x - b[i]].size(); j++)
            for(int k = 0; k < mp[b[i]].size(); k++)
                if(mp[x - b[i]][j] == mp[b[i]][k])
                    ans++;
    cout << ans / 2 << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
        solve();
}