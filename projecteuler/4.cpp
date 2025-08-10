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
  auto Palindrome = [](int x) {
    string s = to_string(x);
    string s2 = s;
    reverse(s.begin(), s.end());
    return s == s2;
  };
  int mx = 0;
  for (int x = 999; x >= 100; x--) {
    for (int y = 999; y >= 100; y--) {
      int prod = x * y;
      if (Palindrome(prod) && prod > mx) {
        mx = prod;
      }
    }
  }
  cout << mx << '\n';
  return 0;
}
