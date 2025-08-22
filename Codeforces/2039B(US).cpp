 #include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;
using ll = long long;

//Problem Description:
// given a string, find a substring of the string and return
// if the number of substrings in a string is even or state that no
// no such substring exists.

//Potential Solutions:
// viable substrings can be counted with n*(n+1)/2


void solve() {

  string s;
  set<string> subs;

  cin >> s;

  if(s.length() == 1) { cout << -1 << endl; return; }

  for(int i=0; i <= s.length(); i++) {
    for(int j=0; j < s.length()-i; j++) {
      subs.insert(s.substr(i, j));
    }
  }

    if(subs.size() % 2 != 0) {
      cout << -1 << endl;
    }  else { cout << *(subs.begin()) << endl; }

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

