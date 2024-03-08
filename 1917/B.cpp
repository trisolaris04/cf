#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 3e5 + 10;

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;
    
    int ans = 0;
    set<char> st;
    for(int i = 0; i < n; i++) {
        st.insert(s[i]);
        ans += (int)st.size();
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