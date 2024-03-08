#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    map<int, int> cnt;
    for(int i = 0; i < n; i++)
        cin >> a[i];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 26; j++) {
            if(cnt[j] == a[i]) {
                cout << char('a' + j);
                cnt[j] = a[i] + 1;
                break;
            }
        }
    }
    cout << '\n';
}

int main() {
    int t;
    cin >> t;

    while(t--)
        solve();
}