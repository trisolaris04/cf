#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int a[200011];

void solve() {
    int n;
    cin >> n;
    cout << a[n] << '\n';
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    for(int i = 1; i <= 200010; i++) {
        string s = to_string(i);
        int cnt = 0;
        for(int j = 0; j < s.size(); j++)
            cnt += (s[j] - '0');
        a[i] = a[i - 1] + cnt;
    }    

    int t;
    cin >> t;
    while(t--)
        solve();
}