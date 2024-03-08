#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int a[300010], b[300010];

bool check(ll x, ll y) {
    if(x > y)
        return true;
    return false;
}

void solve() {
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++)
        cin >> a[i];

    for(int i = 1; i <= n; i++) {
        b[i] = a[i] + b[i - 1];
    }

    for(int i = 1; i <= n; i++) {
        int L = 0, R = i - 1;
        while(L + 1 < R) {
            int mid = L + R >> 1;
            if(b[i - 1] - b[mid - 1] > a[i])
                L = mid;
            else {
                R = mid;
            }
        }

    }
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
        solve();
}