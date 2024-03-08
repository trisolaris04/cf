#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int cnt = 0;
    for(int i = 0; i < n; i++)
        if(s[i] == '*' && s[i + 1] == '*')
            break;
        else
            if(s[i] == '@')
                cnt++;

    cout << cnt << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
        solve();
}