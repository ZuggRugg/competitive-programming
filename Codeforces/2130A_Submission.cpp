#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;
using ll = long long;

// https://codeforces.com/problemset/problem/2130/A

void solve() {
  int n;
  int sum=0;

  cin >> n;
  vi a(n);

  for(int i=0; i<n; i++) {
    cin >> a[i];
  }
  
  sort(a.begin(), a.end());

  for(int i=0; i<n; i++) {
    sum += a[i];
    if(a[i] == 0) ++sum;
  }
  
  cout << sum << endl;

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

// after-report:
// I was about 90% there in terms of a solution but just needed to realize that Mex is only more efficient when
// there is a 0 in the subset like {0, 1}, 0 is the lower bound of the whole set and then smallest integer must be >0 so every 0 adds 1 
// for both cases where there is {0} or {0,1} so you can just count the number of zeros and add to the total
