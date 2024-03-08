#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ll a, b, l;
    cin >> a >> b >> l;

    ll x = l, c = 0, d = 0;
    while(x % a == 0)
        c++, x /= a;
    x = l;
    while(x % b == 0)
        d++, x /= b;

    if(a == b) {
        cout << c + 1 << '\n';
        return;
    }

    set<ll> st;
    for(int i = 0; i <= c; i++)
        for(int j = 0; j <= d; j++)
            if(l % ((ll)pow(a, i) * (ll)pow(b, j)) == 0)
                st.insert(l / ((ll)pow(a, i) * (ll)pow(b, j)));   
    cout << st.size() << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
        solve();
}