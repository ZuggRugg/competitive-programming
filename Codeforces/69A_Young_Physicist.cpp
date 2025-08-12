 #include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;
using ll = long long;

// find the sum of all the vectors you are given

void solve() {

  int n, x, y, z;

  int x_c = 0, y_c = 0, z_c = 0;

  cin >> n;

  for(int i=0; i<n; i++) {
    cin >> x >> y >> z;

    x_c += x;
    y_c += y;
    z_c += z;
  }

  if(x_c == 0 && y_c == 0 && z_c == 0) { cout << "YES" << endl; }
  else { cout << "NO" << endl; }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  solve();

  return 0;
}
