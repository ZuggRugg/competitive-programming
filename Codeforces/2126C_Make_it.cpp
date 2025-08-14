 #include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;
using ll = long long;

// Problem Description:
// we have n towers and start at tower k
// can jump to a tower with x + |hi - hj|
// there is an array of n with tower heights
// water at the bottom is rising up by 1 each second
// Is there a path to escape the water?

//Potential Solutions:
// find the min jump for each tower height?

void solve() {

  int n, k;  
  cin >> n >> k;

  int a[n];

  for(int i=0; i<n; i++) { cin >> a[i]; }


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
