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
// sort array, and then compare height at k to max tower (first case?)
// compare height to next tower
// array of differences for height of each tower in sorted array

void solve() {

  int n, k;  
  cin >> n >> k;

  int a[n];
  int diff[n];

  for(int i=0; i<n; i++) { cin >> a[i]; }

  int hk = a[k-1];  // one based indexing
  int sum = 0;
  int size = sizeof(a) / sizeof(a[n]);

  sort(a, a + size);

  for(int i=0; i<n-1; i++) {
    diff[i] = a[i+1] - a[i];
    sum += diff[i];
    if(i+1 >= sum) { cout << "NO" << endl; return; }
  }

  cout << "YES" << endl;
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
