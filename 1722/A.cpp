#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

string str = "miurT";

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    sort(str.begin(), str.end()); sort(s.begin(), s.end());

    if(str == s) {
        cout << "YES\n";
    } else cout << "NO\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
        solve();
}