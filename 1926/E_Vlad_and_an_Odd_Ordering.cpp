#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n;
    cin >> n;


    vector<int> a;
    map<int, bool> mp;
    for(int i = 1; i <= n; i++)
        if(i & 1)
            a.push_back(i), mp[i] = true;
    
    for(int i = 0; i < (n + 1) / 2; i++)
        if(a[i] * 2 <= n && !mp[a[i]])
            a.push_back(a[i] * 2);
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t;

    while(t--)
        solve();
}