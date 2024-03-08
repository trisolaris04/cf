#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int a[300010], b[300010];
pair<int, int> c[300010];

void solve() {
	int n, k;
	cin >> n >> k;
	
	for(int i = 1; i <= n; i++)
        cin >> a[i];
    for(int i = 1; i <= n; i++)
        cin >> b[i], c[i] = {abs(b[i]), a[i]};

    sort(c + 1, c + n + 1);

    ll cnt = 0, pos = 0;
    for(int i = 1; i <= n; i++) {
        cnt += 1LL * (c[i].first - pos) * k - c[i].second;
        if(cnt < 0) {
            cout << "NO\n";
            return;
        }
        pos = c[i].first;
    }
    cout << "YES\n";
}
int main() {
    int t;
    cin >> t;

    while(t--)
        solve();
}