#include <bits/stdc++.h>
using namespace std;
const int N = 3e5 + 10;

void solve() {
    int n;
    cin >> n;

    int k, x;
    cin >> k >> x;
    vector<int> a(n);

    long long sum = 0;
    for(int i = 0; i < n; i++)
        cin >> a[i], sum += a[i];

    sort(a.begin(), a.end(), [&](int p, int q) {return p > q;});

    long long ans = 0;
    for(int i = 0; i < k; i++) {
        for(int j = i + 1; j < x; j++)
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