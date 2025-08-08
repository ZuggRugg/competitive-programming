#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

void solve() {
  int n;
  int interval = 0;
  bool flag = true;

  cin >> n;

  int nrr[n];

  for(int i=0; i<n; ++i) { cin >> nrr[i]; } 

  for(int i=0; i < n - 1; ++i) {
    interval = abs(nrr[i+1]-nrr[i]);
    if(interval != 7 && interval != 5) { flag = false; break; }
  }

  if(flag) { cout << "YES\n"; }
  else { cout << "NO\n"; }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int t = 1;
  cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}

