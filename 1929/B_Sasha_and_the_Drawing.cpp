#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, k;
    cin >> n >> k;

    if(k == n * 4 - 2) {
        cout << n * 2 << '\n';
        return;
    }
    if(k & 1) {
        cout << (k - 1) / 2 + 1 << '\n';
    } else {
        cout << k / 2 << '\n';
    }
}
int main() {
    int t;
    cin >> t;

    while(t--)
        solve();
}