#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 2E5 + 10;

int n, a[N];

struct Node {
    int minv;
    int maxv;
} seg[N * 4];

void update(int id) {
    seg[id].minv = min(seg[id * 2].minv, seg[id * 2 + 1].minv);
    seg[id].maxv = max(seg[id * 2].maxv, seg[id * 2 + 1].maxv);
}

void build(int id, int l, int r) {
    if (l == r)
        seg[id].minv = seg[id].maxv = a[l];
    else {
        int mid = (l + r) >> 1;
        build(id * 2, l, mid);
        build(id * 2 + 1, mid + 1, r);
        update(id);
    }
}

void change(int id, int l, int r, int pos, int val) { 
    if (l == r)
        seg[id].minv = seg[id].maxv = val;
    else {
        int mid = (l + r) >> 1;
        if (pos <= mid)
            change(id * 2, l, mid, pos, val);
        else
            change(id * 2 + 1, mid + 1, r, pos, val);
        update(id);
    }
}

pair<int, int> query(int id, int l, int r, int ql, int qr) {
    if (ql <= l && qr >= r)
        return {seg[id].minv, seg[id].maxv};
    int mid = (l + r) >> 1;
    if (qr <= mid)
        return query(id * 2, l, mid, ql, qr);
    else if (ql > mid)
        return query(id * 2 + 1, mid + 1, r, ql, qr);
    else {
        auto left_child = query(id * 2, l, mid, ql, mid);
        auto right_child = query(id * 2 + 1, mid + 1, r, mid + 1, qr);
        return {min(left_child.first, right_child.first), max(left_child.second, right_child.second)};
    }
}

void solve() {
    int q;
    cin >> n;

    map<int, vector<int>> mp;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        mp[a[i]].push_back(i);
    }

    build(1, 1, n);
    cin >> q;
    while (q--) {
        int l, r, x, y;
        cin >> l >> r;
        auto result = query(1, 1, n, l, r);
        //cout << result.first << " " << result.second << '\n';
        int minn = result.first, maxn = result.second;
        if(minn == maxn) {
            cout << "-1 -1\n";
        } else {
            for(auto p : mp[minn])
                if(p >= l && p <= r) {
                    //cout << p << " ";
                    x = p;
                    break;
                }
            for(auto p : mp[maxn])
                if(p >= l && p <= r) {
                    //cout << p << "\n";
                    y = p;
                    break;
                }
            if(x > y)
                cout << y << " " << x << '\n';
            else
                cout << x << " " << y << '\n';
        }
    }
    cout << '\n';
}

int main() {
    int t;
    cin >> t;

    while (t--)
        solve();
}
