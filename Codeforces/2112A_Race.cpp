#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

// Alice and Bob are trying to race and get to point x or y. 
// Alice runs from point a
// Bob hasn't decided and can decide to choose to get to x or y from any integer other than a
// The point is to find if the distance from Bob to the nearest point's (x or y) is faster than Alice from point a
//alice wins if point is the midpoint of x and y
//if she wins then print NO




// why my solution didnt work:
// I didn't use the simplest solution which was instead to compare variables, and instead decided to calculate midpoints and try and hammer out midpoints
// Suggested fix: list out all the cases and try to write in the simplest terms first, do not calculate if not needed, try to be simpler?

void solve() {
  int a, x, y;
  bool flag;
  cin >> a >> x >> y;

  // ensure that smaller point is first
  if(x > y) swap(x, y);

  int mid = ((x+y)/2);

  if(a == mid && ((x+y) % 2) == 0) {
    cout << "NO\n";
    return;
  }

  int bob_dist_x = abs(a - x);
  int bob_dist_y = abs(a - y);

  int bob_d = min(bob_dist_x, bob_dist_y);
 
  int alic_d = abs(a - mid);

  if(alic_d < bob_d) { flag = true; }
  else { flag = false; }
  
  if(flag == true) { cout << "NO\n"; } // Alice wins, bob loses
  else if(flag == false) { cout << "YES\n"; } // Bob wins

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


// actual solution:
#include <bits/stdc++.h>
 
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int a, x, y;
    cin >> a >> x >> y;
    cout << ((a < x) == (a < y) ? "YES" : "NO") << '\n';
  }
}

