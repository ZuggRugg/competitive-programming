 #include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;
using ll = long long;

//Problem Description:
// queue of N people (1..n), and time t
// Given String S representing all the people
// Girls move up in the queue while boys stay let them move up (B and G swap from i to i+1)
// given (1 <= n,t <= 50)

//Potential_Solution:
// use swap?
// iterate backwards?
// research queue structure c++
// how to factor in time x
// something like swap(s[i], s[abs(i-t)])

//Actual Solution:
// Just implement straight forward dont have to worry about people leaving queue at all.

void solve() {

  string s;
  int n, t;

  cin >> n >> t;
  cin >> s;
  
  //iterate backwards
  for(int i=0; i<t; i++) {
    for(int j=s.length(); j>=0; j--) {
      if(s[j-1] == 'B' && s[j] == 'G') { 
	s[j-1] = 'G'; s[j] = 'B';
      }
    }
  }

  cout << s << endl;
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

