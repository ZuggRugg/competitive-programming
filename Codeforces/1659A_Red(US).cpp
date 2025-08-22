 #include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;
using ll = long long int;

//Problem Description:

//Potential Solutions:

void solve() {

  int n, r, b;
  string s = "";

  cin >> n >> r >> b;

  // max number of groups of n chars of r and b that fit in n
  int leftover = (r % b);
  int pairs = (n-leftover)/2; //pairs of 'RB' or 'BR' 
  

  

  for(int i=0; i<n; i++) {
    

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
