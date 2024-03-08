#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 3e5 + 10;

char c[3][3];

void solve() {
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)    
            cin >> c[i][j];
    
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++) {
            if(c[i][j] == '?') {
                map<char, bool> mp;
                for(int k = 0; k < 3; k++)
                    mp[c[i][k]] = true;
                if(!mp['A']) {
                    cout << 'A' << '\n';
                }
                if(!mp['B']) {
                    cout << 'B' << '\n';
                }
                if(!mp['C']) {
                    cout << 'C' << '\n';
                }
            }
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