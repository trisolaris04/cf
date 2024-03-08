#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 3e5 + 10;

ll a[N], b[N], c[N];

void solve() {
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++)
        cin >> a[i];

    set<ll> st;
    ll sum = 0;
    st.insert(0);
    for(int i = 1; i <= n; i++) {
        if(i & 1)
            sum += a[i];
        else
            sum -= a[i];
        st.insert(sum);
    }
    if(st.size() != n + 1) {
        cout << "YES\n";
    } else cout << "NO\n";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
        solve();
}