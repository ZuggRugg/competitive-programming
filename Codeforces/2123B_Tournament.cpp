#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;
using ll = long long;

// 2123B Tournament
// given an array of n integers
// player i has a_i strength
// while more than k players remain:
// - Two remaining players are chosen at random;
// - Then the chosen player with the lower strength is eliminated. If the chosen players have the same strength, one is eliminated at random. 
// (1 <= j,k <= n) | for the player j and constraints
// Determine if the player j can be one of the k last remaining players
// some type of greedy solution is needed.

void solve() {
  int n, j, k, mx=0;
  cin >> n >> j >> k;

  int arr[n+1];

  for(int i=1; i<=n; i++) { 
    cin >> arr[i];
    mx = max(mx, arr[i]);
 }

  if(k > 1 || arr[j] == mx) { cout << "YES\n"; }
  else { cout << "NO\n"; }


  //potential solutions:
  //Something to do with calculating sums?
  //Something to do with greedy approach
  //we know that n-k players are kicked out randomly (the first k smallest integers? but random)
  // take the number j or arr[j] and calculate how many numbers are greater than arr[j] and if that exceeds n-k then j is not large enough?
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

// After Action Report:
// This is the second time where i got stumped by a problem that has an extremely simple solution.
// I need to be aware of the cases of where something is wrong or right?
// I tend to overcomplicate problems really quickly
