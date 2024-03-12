#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    bool ok = false;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 1; i < n - 1; i++) {
        if (!a[i] || !a[i - 1] || !a[i + 1])
            continue;
        if (a[i] < a[i - 1] * 2) {
            cout << "NO\n";
            return;
        }
        a[i + 1] -= a[i - 1], a[i] -= a[i - 1] * 2;
        a[i - 1] = 0;
    }

    for (int i = 0; i < n; i++)
        if (a[i]) {
            cout << "NO\n";
            return;
        }
    cout << "YES\n";
}
int main() {
    int t;
    cin >> t;

    while (t--)
        solve();
}