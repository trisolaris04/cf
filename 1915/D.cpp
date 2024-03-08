#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 3e5 + 10;

bool check(char c) {
    if(c == 'a' || c == 'e')
        return true;
    return false;
}
void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    for(int i = 0; i < s.size(); i++) {
        //if(check(s[i]) && !check(s[i + 1]))
        //    cout << '.';
        cout << s[i];

        if(i < s.size() - 1 && !check(s[i]) && !check(s[i + 1])) {
            cout << '.';
        }
        else {
            if(i < s.size() - 2) {
                if(check(s[i]) && !check(s[i + 1]) && check(s[i + 2])) {
                    cout << '.';
                }
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