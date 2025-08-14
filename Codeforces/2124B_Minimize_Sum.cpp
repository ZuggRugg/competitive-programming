 #include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;
using ll = long long;

// Problem Description:
// given an array of integers n find the 
// sum of all minimium numbers in every subset
// one operation:
// Choose two indices i and j such that i<j. Set ai := ai+aj. Then, set aj=0. 
// can only do this operation at least once.

// Potential Solutions:
// Something to do with mex? know that minimium sum can be
// if the first element is 0 then the entire min is 0, if not then take two smallest elements and 

void solve() {

  int n, min=0;  
  cin >> n;
  int a[n];

  for(int i=0; i<=n; i++) { cin >> a[i]; }

  if(a[0] == 0) { cout << 0 << endl; }

  int min = a[0] * n; //minimium sum is the smallest number summed over the length of the array
    
  for(int i=0; i<=n; i++) {
    
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
