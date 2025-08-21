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
  //ll n = pow(2, 1000);
  //string s = to_string(n);
  //ll ans = 0;
  //for (int i = 0; i < (int) s.size(); i++) {
  //  ans += s[i] - '0';
  //}
  //cout << ans << '\n';
  string s = "1";
  for (int i = 0; i < 1000; i++) {
    int carry = 0;
    for (int j = (int)s.size() - 1; j >= 0; j--) {
      int x = (s[j] - '0') * 2 + carry;
      s[j] = (x % 10) + '0';
      carry = x / 10;
    }
    if (carry) s.insert(s.begin(), carry + '0');
  }
  long long ans = 0;
  for (char c : s) ans += c - '0';
  cout << "2^1000 = " << s << "\n";
  cout << ans << "\n";
  return 0;
}
