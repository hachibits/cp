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
  vector<string> a1 = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
  vector<string> a2 = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
  vector<string> a3 = {"twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
  string a4 = "hundredand";
  int ten = 0;
  for (auto &s : a1) ten += s.size();
  int twenty = ten;
  for (auto &s : a2) twenty += s.size();
  int hundred = twenty;
  for (auto &prefix : a3) {
    hundred += prefix.size() * 10 + ten;
  }
  int thousand = hundred;
  for (int i = 1; i < (int)a1.size(); i++) {
    int add = (a1[i] + a4).size() * 100 + hundred - string("and").size();
    thousand += add;
  }
  thousand += string("onethousand").size();
  cout << thousand << "\n";
  return 0;
}
