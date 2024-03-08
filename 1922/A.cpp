#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    string a, b, c;
    cin >> a >> b >> c;
    
    for(int i = 0; i < n; i++) {
        if(a[i] == b[i]) {
            if(c[i] != a[i]) {
                cout << "YES\n";
                return;
            }
        } else {
            if(c[i] != a[i] && c[i] != b[i]) {
                cout << "YES\n";
                return;
            }
        }
    }
    cout << "NO\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
        solve();
}