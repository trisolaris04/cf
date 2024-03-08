#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    int sum = 0;
    for(int i = 0; i < n; i++)
        cin >> a[i], sum += a[i];

    if(sum % 3 == 0) {
        cout << 0 << '\n';
        return;
    }

    for(int i = 0; i < n; i++)
        if((sum - a[i]) % 3 == 0) {
            cout << 1 << '\n';
            return;
        }
    
    int y = (sum / 3 + 1) * 3;
    cout << y - sum << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
        solve();
}