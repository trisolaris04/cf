#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ll a, b;
    cin >> a >> b;

    //cout << a * b << "\n";
    //printf("%lld\n", lcm(a, b));

    // if(lcm(a, b) > max(a, b)) {
    //     cout << lcm(a, b) << '\n';
    //     return;
    // }
    // for(int i = 2; i <= 10000000; i++) {
    //     if(a % i == 0 || b % i == 0) {
    //         cout << lcm(a, b) * i << '\n';
    //         return;
    //     }
    // }
    //cout << lcm(a, b) * 2 << '\n';
    if(lcm(a, b) > b) {
        cout << lcm(a, b) << "\n";
    } else {
        cout << lcm(a, b) * (b / a) << "\n";
    }
}
int main() {
    int t;
    cin >> t;

    while(t--)
        solve();
}