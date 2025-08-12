#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

int main() 
{
  // example. [0, 1, -1, -2, 10, 14, -23]
  // brute-force (go through all sub-arrays), O(n^3)
  int n;
  int array[n];

  int best = 0;
  for (int a = 0; a < n; a++) {
    for (int b = a; b < n; b++) {
      int sum = 0;
      for (int k = a; k <= b; k++) {
	sum += array[k];
      }
      best = max(best,sum);
    }
  }
  cout << best << "\n";  


  //More refined Brute-force O(n^2)
  int best = 0;
  for (int a = 0; a < n; a++) {
    int sum = 0;
    for (int b = a; b < n; b++) {
      sum += array[b];
      best = max(best,sum);
    }
  }
  cout << best << "\n";


  //Most efficient Algorithm for this Problem, O(n)
  int best = 0, sum = 0;
  for (int k = 0; k < n; k++) {
    sum = max(array[k],sum+array[k]);
    best = max(best,sum);
  }
  cout << best << "\n";

}
