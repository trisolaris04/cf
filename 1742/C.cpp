#include <bits/stdc++.h>
using namespace std;

char c[8][8];

void solve() {
    for(int i = 0; i < 8; i++)
        for(int j = 0; j < 8; j++)
            cin >> c[i][j];

    for(int i = 0; i < 8; i++) {
        bool ok = true;
        for(int j = 0; j < 8 && ok; j++)
            if(c[i][j] != 'R')
                ok = false;
        if(ok) {
            cout << "R\n";
            return;
        }
        ok = true;
        for(int j = 0; j < 8 && ok; j++)
            if(c[j][i] != 'B')
                ok = false;
        if(ok) {
            cout << "B\n";
            return;
        }
    }    
}
int main() {
    int t;
    cin >> t;

    while(t--)
        solve();
}