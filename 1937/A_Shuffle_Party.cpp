#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int x;
    cin >> x;

    int y = log2(x + 1);
    if(pow(2, y) - 1 == x)
        y--;
    cout << (int)pow(2, y) << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
        solve();
}