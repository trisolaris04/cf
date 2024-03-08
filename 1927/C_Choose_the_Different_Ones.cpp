#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> a(n), b(m);
    for(int i = 0; i < n; i++)
        cin >> a[i];

    for(int i = 0; i < m; i++)
        cin >> b[i];

    sort(a.begin(), a.end()), sort(b.begin(), b.end());

    map<int, bool> mp1, mp2;
    for(int i = 0; i < n; i++)
        if(a[i] <= k)
            mp1[a[i]] = true;
    
    for(int i = 0; i < m; i++)
        if(b[i] <= k)
            mp2[b[i]] = true;

    int cnt1 = 0, cnt2 = 0, cnt = 0;
    for(int i = 1; i <= k; i++) {
        if(mp1[i] && !mp2[i])
            cnt1++;
        if(mp2[i] && !mp1[i])
            cnt2++;
        if(mp1[i] && mp2[i])
            cnt++;
    }

    if(cnt1 <= k / 2 && cnt2 <= k / 2 && abs(k / 2 - cnt1) + abs(k / 2 - cnt2) == cnt)
        cout << "YES\n";
    else cout << "NO\n";
}

int main() {
    int t;
    cin >> t;

    while(t--)
        solve();
}