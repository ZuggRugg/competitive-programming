#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

// Problem Description:
// given n integers a_i -> a_n
// and a sum initialized to 0;
// if sum + a_i is even then add point then divide by 2 until odd number
// then add the next a_i to s and keep going

// since these divisions are
// considered more beneficial for Kevin's development, 
// his mother wants to rearrange a so that the number of Kevin's total points is maximized. 
// Determine the maximum number of points.

// Potential Solution:
// if there is a pair of <even, odd> you get 2 points, check s + a_i for even-odd then use to get next pair?
// compare arr[i] and arr[i+1]?
// count the number of even and odd numbers in the array and use that?
// otherwise if just odd or even left over just add n-remaining-1 points?
// doenst work when [2 4 6]

void solve() {
  int n;
  int points = 0;
  int even = 0; int odd = 0;

  cin >> n;
  int arr[n];
  
  for(int i=0; i<n; i++) { cin >> arr[i]; }

  //count the total even numbers
    for(int i=0; i<n; i++) { 
      if((arr[i] % 2) == 0) { ++even; }
    }

    odd = n - even;

    if(even > 0) { points = odd+1; }
    else { points = odd-1; }

  cout << points << endl;
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


// Solution Afterwards (Editorial):
// After the first operation, s is always odd. You can only earn points when ai is odd after this operation. However, during the first operation, you can only earn a point if ai
// is even
// Let c0
// and c1
// be the number of even and odd numbers, respectively.
// If there is at least one even number, you can place it first, making the answer c1+1
// Otherwise, since no points can be earned during the first operation, the answer is c1-1
// Time complexity: O(n)

