#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll a[200010], b[200010];

void solve() {
    int n;
    ll m;
    cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    string s;
    cin >> s;

    int L = 1, R = n;
    vector<int> ans;
    for(int i = 0; i < n; i++) {
        if(s[i] == 'L')
            ans.push_back(a[L]), L++;
        else
            ans.push_back(a[R]), R--;
    }

    b[0] = 1;
    reverse(ans.begin(), ans.end());
    for(int i = 1; i <= n; i++)
        b[i] = (b[i - 1] * ans[i - 1]) % m;
    cout << b[n] % m << " ";
    for(int i = 1; i < n; i++)
        cout << b[n - i] << " ";
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
        solve();
}