#include <bits/stdc++.h>
#include <iostream>
#include <limits.h>
#include <cstdint>
#include <vector>
#include <string>
#include <math.h>
#include <algorithm>
#include <numeric>
#include <map>
#include <unordered_map>
#include <set>
#include <cstring>
#include <deque>
#include <stack>
#include <queue>
#include <utility> 
#include <iomanip>      // std::setprecision
#include <sstream>      // std::stringstream

using namespace std;
using vi = vector<int>;

void solve() {
  int n; int m;

  cin >> n >> m;

  int arr[n];
  int brr[m];

  for(int i1=0; i1<n; i1++) { cin >> arr[i1]; }
  for(int j1=0; j1<m; j1++) { cin >> brr[j1]; }
  int i = 0; int j = 0;    //Two Pointers
  int k = 0;
    
  int crr[n+m]; // combined array

  while(i < n || j < m) {
    if((j==m) || (i<n && arr[i] < brr[j])) { crr[k] = arr[i]; ++i; ++k; }
    else { crr[k] = brr[j]; ++j; ++k; }
  }    
  // check if condition for not going out of bounds and then see if this template file works

  for(int i=0; i<k; i++) { cout << crr[i] << " "; }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();
}


//Notes: This is a template file that I found that will hopefully work with codeforces?
