#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 3e5 + 10;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    int cnt = 0;
    bool ok = false;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i] < 0)
            ++cnt;
        if(!a[i])
            ok = true;
    }

    if(ok) {
        cout << 0 << '\n';
        return;
    }
    if(cnt & 1) {
        cout << 0 << '\n';
        return;
    }

    cout << 1 << '\n';
    for(int i = 0; i < n; i++) {
        if(a[i]) {
            cout << i + 1 << " " << 0 << '\n';
            return;   
        }
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