#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n;
    cin >> n;

    vector<pair<int, int>> p(n);
    for(int i = 0; i < n; i++)
        cin >> p[i].first >> p[i].second;

    sort(p.begin(), p.end());

    for(int i = 0; i < n; i++) {
        bool ok1 = false, ok2 = false, ok3 = false, ok4 = false;
        if(p[i].first > 0)
            ok1 = true;
        if(p[i].first < 0)
            ok2 = true;
        if(p[i].second < 0)
            ok3 = true;
        if(p[i].second > 0)
            ok4 = true;        
        for(int j = 0; j < n; j++) {
            if(p[j].first > p[i].first)
                ok1 = true;
            if(p[j].first < p[i].first)
                ok2 = true;
            if(p[j].second > p[i].second)
                ok4 = true;
            if(p[j].second < p[i].second)
                ok3 = true;
        }
        if(ok1 && ok2 && ok3 && ok4) {
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

    while(t--)
        solve();
}