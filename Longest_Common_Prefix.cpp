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


// my new solution using just the substr method for c++
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 0 ) { return ""; }
        
         if(strs[0][0] != strs[1][0]) {
            return "";
        }

        std::string ans = "";
        ans = ans + strs[0][0];
        int l = 0;

        for(size_t i = 0; i<strs.size(); i++) {
           if(strs[i].substr(0, l) != ans) { return ans; }
           else { ++l; ans = ans + strs[0][l]; }
        }
    }
};
