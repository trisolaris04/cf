#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

char ch[110][110];

void solve() {
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
            cin >> ch[i][j];

    for(int i = 1; i <= n; i++) {
        int cnt = 0;
        for(int j = 1; j <= n; j++)
            if(ch[i][j] == '1')
                cnt++;
        if(cnt == 1) {
            cout << "TRIANGLE\n";
            return;
        }
    }
    cout << "SQUARE\n";       
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
        solve();
}