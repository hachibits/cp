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
//  const int n = 1e6;
  unordered_map<long long, long long> memo;
  auto f = [&](auto&& self, long long n) {
    if (n == 1) {
      return (long long) 1;
    }
    if (memo.find(n) != memo.end()) {
      return memo[n];
    };
    if (n % 2 == 0) {
      return memo[n] = 1 + self(self, n / 2);
    } else {
      return memo[n] = 1 + self(self, 3 * n + 1);
    }
  };
  long long mx = 0;
  long long mx_i = 0;
  for (long long i = 1; i < 1000000; i++) {
    long long steps = f(f, i);
    if (steps > mx) {
      mx = steps;
      mx_i = i;
    }
  }
  cout << mx_i << '\n';
  return 0;
}
