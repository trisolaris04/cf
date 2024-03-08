#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int a[200010];

void solve() {
    int n;
    cin >> n;

    vector<int> v;
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
        if((a[i] >> 30) & 1)
            v.push_back(a[i]);
    }

    // for(int i = 0; i < v.size(); i++)
    //     cout << v[i] << " ";
    // cout << '\n';

    int ans = n;
    for(int i = 1; i <= n; i++)
        for(int j = 0; j < v.size(); j++) {
            bool ok = false;
            for(int k = 0; k < 31 && !ok; k++)
                if((v[j] >> k) == (a[i] >> k))
                    ok = true;
            if(!ok) {
                ans--;
            }
        }
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