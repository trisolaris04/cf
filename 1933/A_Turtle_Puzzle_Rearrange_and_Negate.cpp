#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n;
    cin >> n;

    int sum = 0;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        sum += abs(x);
    }
    cout << sum << '\n';
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
        solve();
}