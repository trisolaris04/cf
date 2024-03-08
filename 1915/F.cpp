#include <bits/stdc++.h>
using namespace std;

template <typename T>
class fenwick {
 public:
  vector<T> fenw;
  int n;

  fenwick(int _n) : n(_n) {
    fenw.resize(n);
  }

  void modify(int x, T v) {
    while (x < n) {
      fenw[x] += v;
      x |= (x + 1);
    }
  }

  T get(int x) {
    T v{};
    while (x >= 0) {
      v += fenw[x];
      x = (x & (x + 1)) - 1;
    }
    return v;
  }
};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int tt;
  cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i] >> b[i];
    }
    vector<int> order(n);
    iota(order.begin(), order.end(), 0);
    sort(order.begin(), order.end(), [&](int i, int j) {
      return b[i] < b[j];
    });
    for (int i = 0; i < n; i++) {
      b[order[i]] = i;
    }
    sort(order.begin(), order.end(), [&](int i, int j) {
      return a[i] < a[j];
    });
    fenwick<int> fenw(n);
    long long ans = 0;
    for (int i = n - 1; i >= 0; i--) {
      ans += fenw.get(b[order[i]]);
      fenw.modify(b[order[i]], +1);
    }
    cout << ans << '\n';
  }
  return 0;
}
