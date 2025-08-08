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

    vi arr[n], brr[m];

    for(size_t i1=0; i1<n; i1++) { cin >> arr[i1]; }
    for(size_t j1=0; j1<m; j1++) { cin >> brr[j1]; }
    int i = 0; int j = 0;    //Two Pointers
    
    vi crr[n+m]; // combined array

    while(i < arr.size() || j < brr.size()) {
      if(arr[i] < brr[j]) { crr.push_back(arr[i]); ++i; }
      else { crr.push_back(brr[j]); ++j;}
    }    
    // check if condition for not going out of bounds and then see if this template file works

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();
}


//Notes: This is a template file that I found that will hopefully work with codeforces?
