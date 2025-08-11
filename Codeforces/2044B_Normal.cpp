#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;
using ll = long long;


void solve() {
  string a;
  cin >> a;

  reverse(a.begin(), a.end());

  for(int i=0; i<a.length(); i++) {
    if(a[i] == 'q') { a[i] = 'p'; }
    else if(a[i] == 'p') { a[i] = 'q'; }
  }

  cout << a << endl;
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

