#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int a[100010], s[100010];

void solve() {
    int n;
    cin >> n;

    int cnt1 = 0, cnt2 = 0, ans = 0;
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
        ans += a[i];
        if(i == 0) {cout << ans << " "; continue;}
        if(a[i] & 1) cnt1++;
        else cnt2++;
        if(i & 1) cout << ans << " ";
        else cout << ans - cnt1 << " ";
    }
    cout << "\n";
}
int main() {
    int t;
    cin >> t;

    while(t--)
        solve();
}