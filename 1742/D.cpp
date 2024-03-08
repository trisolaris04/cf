#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    int ans = 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i] == 1) {
            ans = max(ans, i * 2 + 2);
        }
    }

    for(int i = 0; i < n; i++) {
        if(gcd(a[i], a[n - 1]) == 1) {
           ans =  max(ans, n + i + 1);
        }
    }
    cout << ans << '\n';
    
}
int main() {
    int t;
    cin >> t;

    while(t--)
        solve();
}