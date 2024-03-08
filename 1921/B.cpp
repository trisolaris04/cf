#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n;
    cin >> n;

    string a, b;
    cin >> a >> b;

    int cnt1 = 0, cnt2 = 0, ans = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] != b[i]) {
           if(a[i] == '1')
                ++cnt1;
            if(a[i] == '0')
                ++cnt2;
        }        
    }

    cout << max(cnt1, cnt2) << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
        solve();
}