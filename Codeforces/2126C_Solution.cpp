 #include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;
using ll = long long;

//Problem Description:

//Potential Solutions:

void solve() {

  int n, k;
  int cur, dist = 0;

  cin >> n >> k;
  
  // one-based indexing
  int a[n+1];
  for(int i=1; i<=n; i++) { cin >> a[i]; }

  cur = a[k];
  dist = a[k];

  sort(a+1, a+n+1);

  bool ans = true;
  for(int i=1; i<=n; i++) {
    if(a[i] < cur) continue;
    if(a[i] - cur > dist) {
      ans = false;
    }
    cur = a[i];
  }

  if(ans) cout << "YES" << endl;
  else cout << "NO" << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int t;
  cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}
