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
  int n = 1000;
  vector<int> tris;
  auto Prod = [](int a, int b, int c) {
    if (a < b && c > 0 && a * a + b * b == c * c) {
      return a * b * c;
    }
    return 0;
  };
  for (int a = 1; a <= n / 2; a++) {
    for (int b = a + 1; b <= n / 2; b++) {
      int c = 1000 - a - b;
      int p = Prod(a, b, c);
      if (p > 0) {
        tris.push_back(p);
      }
    }
  }
  for (int i = 0; i < (int) tris.size(); i++) { 
    cout << tris[i] << '\n';
  }
  return 0;
}
