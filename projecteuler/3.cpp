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
  auto sieve = [](int n) {
    vector<bool> primes(n+1, true);
    primes[0] = false;
    primes[1] = false;
    for (int i = 2; i < n + 1; i++) { 
      if (primes[i] && (long long) i * i < n + 1) {
        for (int j = i * i; j < n + 1; j += i) {
          primes[j] = false;
        }
      }
    }
    return primes;
  };
  vector<bool> primes = sieve(10000);
  long long n = 600851475143;
  for (long long i = (long long) primes.size() - 1; i >= 0; i--) {
    if (n % i == 0) {
      cout << i << '\n';
      break;
    }
  }
  return 0;
}
