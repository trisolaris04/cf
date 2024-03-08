#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n; char ch;
    cin >> n >> ch;

    vector<string> a(n), b, c;
    for(int i = 0; i < n; i++)
        cin >> a[i], swap(a[i][0], a[i][1]); 

    for(int i = 0; i < n; i++) {
        if(a[i][0] == ch)
            b.push_back(a[i]);
        else
            c.push_back(a[i]);
    }

    sort(c.begin(), c.end());
    sort(b.begin(), b.end());

    for(int i = 0; i < n; i++)
        cout << a[i] << "\n";
    
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
        solve();
}