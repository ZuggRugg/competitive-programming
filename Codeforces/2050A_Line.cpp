 #include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;
using ll = long long int;

//Problem Description:
// Since space on the second strip is very valuable, Kostya 
// asks you to choose the maximum possible number x such that all words s1,s2, ..sx
// that fit on the first strip of length m.

//Potential Solutions:

void solve() {

  int m, n;
  cin >> n >> m;

  string s[n];
  ll len[n];

  for(int i=0; i<n; i++) { 
    cin >> s[i]; 
    len[i] = s[i].length();
  }

  //  sort(len, len+n);

  int total = accumulate(len, len+n, 0);
  if(total <= m) {
    cout << n << endl;
    return;
  }

  int sum = 0;
  for(int i=0; i<n; i++) {
    if(sum+len[i] > m) {
      cout << i << endl;
      return;
    }
    sum += len[i];
  }


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
