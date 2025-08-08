// Write a function to find the longest common prefix string amongst an array of strings.
// If there is no common prefix, return an empty string "".

// Input: strs = ["flower","flow","flight"]
// Output: "fl"

// old hash map solution that doesnt seem bad?
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
      string ans = "";
      unordered_map<int, string> m;
      int c = 0; 

      for(int i = 0; i<strs.size(); i++) {       
	m.insert({i, strs[i][c]});
	if(strs[i+1][c] != m.find(i)) {
	  return ans;
	}
	++c;
      }
   }
};


// The Common solution where you take the shortest string and then slowly decrease the length
// until you find the correct prefix
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
      if(strs.size() == 0) { return ""; }
      
      sort(strs.begin(), strs.end(), sort_l());
      string p = strs[0];
      int l = p.length();
      
      for(size_t i = 1; i<strs.size(); i++) {
	    if(strs[i] != p) {
	      p.resize(--l);
	    }
      }

      if(p.length() != 0) {
      return p;
      } else { return "";}
    }
};


// my new solution using just the substr method for c++
// this would theoretically work except for a million stupid fucking edge cases
// O(mn) time complexity (string length times length of array)
class Solution {
public:
  string longestCommonPrefix(vector<string>& strs) {
    if(strs.size() == 0 ) { return ""; }
        
    if(strs[0][0] != strs[1][0]) {
      return "";
    }

    std::string ans = "";
    ans = ans + strs[0][0];
    int l = 1;

    for(size_t j = 0; j<strs[0].length(); j++) {
      for(size_t i = 0; i<strs.size(); i++) {
	if(l > strs[i].length || strs[i].substr(0, l) != ans) { return ans.substr(0, l-1); }      
      }
      if(l < strs[0].length()) {
      ++l; ans = ans + strs[0][l-1];
      }
    }
    return "";
  }
};


// scratch work
for(size_t j = 0; j<strs[0].length(); j++) {
  for(size_t i = 0; i<strs.size(); i++) {
    if(strs[i].substr(0, l) != ans) { return ans; }      
  } 
  else { ++l; ans = ans + strs[0][l];}
 }


