#include <bits/stdc++.h>

using namespace std;

void debug_out() { cerr << endl; }

template <typename Head, typename... Tail>
void debug_out(Head H, Tail... T) {
    cerr << " " << H;
    debug_out(T...);
}

#ifdef LOCAL
#define debug(...) cerr << "[" << #__VA_ARGS__ << "]:", debug_out(__VA_ARGS__)
#else
#define debug(...) 42
#endif

#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()

typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

const ll MOD = (ll)(1e9)+7ll;
const ll INF = (1ll << 60);

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int n, m;
  cin >> n >> m;
  vector<vector<int>> a(n, vector<int>(m));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> a[i][j];
    }
  }
  int mx = 0;
//  vector<pair<int, int>> dirs = {{1,0},{0,1},{1,1},{1,-1}}
  auto Prod = [&](int x, int y, int dx, int dy) {
    int p = 1;
    for (int i = 0; i < 4; i++) {
      p *= a[x+i*dx][y+i*dy];
    }
    return p;
  };
  for (int i = 0; i < n; i++) { 
    for (int j = 0; j < m; j++) { 
      if (i + 3 < n) {
        mx = max(mx, Prod(i, j, 1, 0));
      }
      if (j + 3 < m) {
        mx = max(mx, Prod(i, j, 0, 1));
      }
      if (i + 3 < n && j + 3 < m) {
        mx = max(mx, Prod(i, j, 1, 1));
      }
      if (i + 3 < n && j - 3 >= 0) {
        mx = max(mx, Prod(i, j, 1, -1));
      }
    }
  }
  cout << mx << '\n';
  return 0;
}
