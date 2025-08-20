 #include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;
using ll = long long int;

// Problem Description:
// find the smallest number y that shares a digit with a given x

// Potential Solutions:
// there are only 10 digits [0..9]
// iterate through digits of a number with modulus
// only finding smallest digit nothing else

void solve() {

  int n;
  cin >> n;

  int mn = 9;

  while(x > 0) {
    mn = min(mn, x % 10);
    x/=10;
  }

  cout << mn << endl;
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
