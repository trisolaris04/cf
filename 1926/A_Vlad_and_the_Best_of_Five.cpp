#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    string s;
    cin >> s;

    int x = 0, y = 0;
    for(int i = 0; i < s.size(); i++)
        if(s[i] == 'A')
            x++;
        else
            y++;
    if(x > y) {
        cout << "A\n";
    } else {
        cout << "B\n";
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