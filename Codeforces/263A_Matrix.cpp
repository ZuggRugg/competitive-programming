#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;
using ll = long long;

// Minimium Number of moves needed to get beautiful matrix is 1, but the upper limit is 5
// the middle is (3,3) so we need to take position of the number 1 and find distance from center

void solve() {

  // BIG PROBLEM: the index of the array is different from the index needed when calculating the absolute value
  // (change the for loop to include 1-5 instead of 0-4 )
  // it literally states this in the problem (-_-)
  int n=0;
  int m[5][5];

  for(int i=1; i<=5; i++) {
    for(int j=1; j<=5; j++) {
      cin >> n;
      if(n == 1) {
	cout << abs(i-3) + abs(j-3) << endl;
	 }
      } 
   }


}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  solve();

  return 0;
}

