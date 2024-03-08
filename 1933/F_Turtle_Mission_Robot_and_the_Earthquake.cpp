#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> a(n, vector<int>(m));  
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];

    queue<pair<int, int>> q;
    vector<vector<int>> dis(n, vector<int>(m, -1)); 
    q.emplace(0, 0);
    dis[0][0] = 0;

    while (!q.empty()) {
        auto [x, y] = q.front();
        q.pop();
        if (y < m - 1 && a[(x + 1) % n][y + 1] == 0 && dis[(x + 1) % n][y + 1] == -1) {
            dis[(x + 1) % n][y + 1] = dis[x][y] + 1;
            q.emplace((x + 1) % n, y + 1);
        }
        if (a[(x + 1) % n][y] == 0 && a[(x + 2) % n][y] == 0 && dis[(x + 2) % n][y] == -1) {
            dis[(x + 2) % n][y] = dis[x][y] + 1;
            q.emplace((x + 2) % n, y);
        }
    }
    
    int ans = -1;
    for (int i = 0; i < n; i++) {
        int res = dis[i][m - 1];
        if (res != -1) {
            if (res % n != (i + 1) % n) {
                res += (i + 1 - res % n + n) % n;
            }
            if (ans == -1 || ans > res)
                ans = res;
        }
    }

    cout << ans << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}
