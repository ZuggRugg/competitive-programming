#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

// Alice and Bob are trying to race and get to point x or y. 
// Alice runs from point a
// Bob hasn't decided and can decide to choose to get to x or y from any integer other than a
// The point is to find if the distance from Bob to the nearest point's (x or y) is faster than Alice from point a
//alice wins if point is the midpoint of x and y
//if she wins then print NO

void solve() {
  int a, x, y;
  bool flag;
  cin >> a >> x >> y;

  // check to see if midpoint
  if(a == ((x+y)/2)) { flag = true; }

  // Problem: if integer is odd the ex. 7/2 is floored becuase int, therefore need to check if x+y is odd first?
  // ex. 3 3 4 would give (3+4) = 7/2 = 3 and a=3 then print NO
  else if(((x+y) % 2) != 0) { flag = false; }
  
  if(flag == true) { cout << "NO\n"; } // Alice wins, bob loses
  else if(flag == false) { cout << "YES\n"; }

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

