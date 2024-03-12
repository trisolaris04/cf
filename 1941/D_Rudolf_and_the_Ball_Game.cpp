#include <bits/stdc++.h>
using namespace std;

int len[1010], op[1010];

void solve() {
    int n, m, x;
    cin >> n >> m >> x;

    --x;
    vector<bool> dp(n, false);
    dp[x] = true;
    for (int j = 0; j < m; j++) {
        int l; char op;
        cin >> l >> op;
        vector<bool> new_dp(n, false);
        for (int i = 0; i < n; i++) {
            if (dp[i]) {
                if (op == '?' || op == '0')
                    new_dp[(i + l) % n] = true;
                if (op == '?' || op == '1')
                    new_dp[(i - l + n) % n] = true;
            }
        }
        swap(dp, new_dp);
    }

    vector<int> ans;
    for (int i = 0; i < n; i++)
        if (dp[i])
            ans.push_back(i);
    sort(ans.begin(), ans.end());
    cout << ans.size() << '\n';
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] + 1 << ' ';
    cout << '\n';
}

int main() {
    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}
