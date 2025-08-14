 #include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;
using ll = long long;

//Problem Description:
// 1-indexed array (remember)
// yousef has to pass through n doors, he open he can pass through, however some are closed
// yousef can press a special button once to open all closed doors, it lasts x seconds
// yousef takes 1 second to pass through a door
// open doors are '0' while closed are '1'
// it is gaurenteed that there is at least one closed door
// [001100111]

//Potential Solutions:
// yousef has to open a closed door no matter what, so we can say that he uses the operation at the first door he encounters
// of a[i-1] from where the door is
// then n - (i-1) for the length of the path from his pos to the end of the array?
// path from first closed door to last closed door?


void solve() {

  int n, x;

  int first = 0, last = 0;
  int closed = 0;

  cin >> n >> x;  

  int a[n];
  for(int i=0; i<n; ++i) { 
    cin >> a[i]; 
    if(a[i] == 1 && closed == 0) { first = i; ++closed;}
    else if(a[i] == 1) {
      last = i+1;
      ++closed;
    }
  }

  int distance = last - first;
  
  if(x >= distance) {  cout << "YES" << endl; }
  else {  cout << "NO" << endl; }
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
