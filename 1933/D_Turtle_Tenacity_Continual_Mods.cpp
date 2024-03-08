#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++) 
        cin >> a[i];

    int min = *min_element(a.begin(), a.end());

    if(count(a.begin(), a.end(), min) == 1) {
        cout << "YES\n";
        return;
    }

    for(int i = 0; i < n; i++)
        if(a[i] % min) {
            cout << "YES\n";
            return;
        }
    
    cout << "NO\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
        solve();
}