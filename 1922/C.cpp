#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n;

    vector<int> a(n + 1), c(n + 1), d(n + 1), ans(n + 1);
    for(int i = 1; i <= n; i++)
        cin >> a[i];

    c[1] = 1;
    for(int i = 2; i < n; i++)
        if(a[i] - a[i - 1] < a[i + 1] - a[i])
            c[i] = a[i + 1] - a[i];
        else c[i] = 1;

    cin >> m;

    for(int i = 1; i <= n; i++) {
        cout << c[i] << " ";
    }
    cout << "\n";
    ans[0] = 1;
    for(int i = 1; i <= n; i++) {
        ans[i] = ans[i - 1] + c[i - 1];
    }
    
    while(m--) {
        
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
        solve();
}